#include "stdafx.h"
using namespace ENTITY;

Renderer pRenderer;

void Renderer::Initialize() {
	fWidth = 0.225f;
	fBgOpacity = 45;
	fLineWidth = 0.0009f;
	fHeaderHeight = 0.083f;
	fOptionHeight = 0.037f;
	fSubHeaderHeight = fOptionHeight;
	fFooterHeight = fOptionHeight;
	fTextSize = 0.35f;
	iTextFont = FontChaletLondon;
	m_cPrimary = { 0, 0, 0, 255 };
	m_dialogHeaderHeight = 0.0415f;
	m_dialogFooterHeight = 0.01725f;
	m_cOutline = { 107, 5, 255, 255 };
	m_hDialogBox = { "commonmenu", "gradient_bgd" };

	Position = Vector2(0.15f, 0.12f);

	TitleColor = Color(3, 219, 252, 255);
	HeaderOutlineColor = Color(255, 0, 0, 255);
	SubHeaderColor = Color(3, 219, 252, 255);
	BackgroundPrimaryColor = Color(0, 0, 0, 255);
	ScrollBarColor = Color(200, 0, 0, 200);
	OptionColor = Color(3, 219, 252, 255);
}
float Renderer::GetOptionY(int pos) {
	return (pos * pRenderer.fOptionHeight) + pRenderer.m_subHeaderY + pRenderer.fSubHeaderHeight / 2;
}
void Renderer::DrawString(const char* text, float x, float y, int font, float scale, Color color, bool outline, int justify, float justifyfix) {
	HUD::SetTextFont(font);
	// justify: 0 - center, 1 - left, 2 - right (-1 = ignore)
	if (justify != -1) {
		HUD::SetTextWrap(0.0f, 0.958f - justifyfix);
		HUD::SetTextJustification(justify);
	}

	HUD::SetTextScale(0.0f, scale);
	HUD::SetTextColour(color.m_r, color.m_g, color.m_b, color.m_a);

	if (outline) HUD::SetTextOutline();
	HUD::SetTextCentre(justify == -2);
	HUD::BeginTextCommandDisplayText("STRING");
	HUD::AddTextComponentSubstringPlayerName(text);
	HUD::EndTextCommandDisplayText(x, y, 0);
}

void Renderer::DrawSprite(Texture texture, float x, float y, float w, float h, float heading, Color color, bool renderIfNotStreamed) {
	bool streamed = GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(texture.dict);
	if (streamed || renderIfNotStreamed) GRAPHICS::DrawSprite_(texture.dict, texture.id, x, y, w, h, heading, color.m_r, color.m_g, color.m_b, color.m_a);
	if (!streamed) GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(texture.dict, 0);
}
void Renderer::DrawSpriteUnsafe(Texture texture, float x, float y, float w, float h, float heading, Color color) {
	GRAPHICS::DRAW_SPRITE(texture.dict, texture.id, x, y, w, h, heading, color.m_r, color.m_g, color.m_b, color.m_a, 0, 0);
}
void Renderer::DrawRect(float x, float y, float width, float height, Color color) {
	GRAPHICS::DRAW_RECT(x, y, width, height, color.m_r, color.m_g, color.m_b, color.m_a, 0);
}

void Renderer::DrawLine(float x1, float y1, float z1, float x2, float y2, float z2, Color color) {
	GRAPHICS::DRAW_LINE(x1, y1, z1, x2, y2, z2, color.m_r, color.m_g, color.m_b, color.m_a);
}

void Renderer::DrawTitle(const char* title) {
	string str = title;
	transform(str.begin(), str.end(), str.begin(), ::toupper);
	DrawString(str.c_str(), 0.742f + pMenu.uiPos.x, 0.14587f + pMenu.uiPos.y, 0, 0.37f, pMenu.SubMenuTitleColor);
}

VOID DrawSpriteF(PCHAR szDict, PCHAR szTexture, FLOAT fPosX, FLOAT fPosY, FLOAT fRot, RGBA g_Col, FLOAT fScaleX = 1.0f, FLOAT fScaleY = 1.0f) {
	INT g_ScreenRes[2];
	GRAPHICS::GET_SCREEN_RESOLUTION(&g_ScreenRes[0], &g_ScreenRes[1]);
	Vector3 g_TextureRes = GRAPHICS::GET_TEXTURE_RESOLUTION(szDict, szTexture);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(szDict)) {
		GRAPHICS::DRAW_SPRITE(szDict, szTexture, fPosX, fPosY, (g_TextureRes.x / (FLOAT)g_ScreenRes[0]) * fScaleX, (g_TextureRes.y / (FLOAT)g_ScreenRes[1]) * fScaleY, fRot, g_Col.r, g_Col.g, g_Col.b, g_Col.a, 0, 0);//0x1FEC16B0
	}
	else
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(szDict, FALSE);
}
FLOAT fMenuScale = 1.0f;
void Renderer::Render() {
	pSubmenuHandler.GetTotalOptions() > pMenu.iMaxOptions ? fRenderOptions = pMenu.iMaxOptions : fRenderOptions = pSubmenuHandler.GetTotalOptions();

	RenderHeader();
	RenderGlobe();
	RenderSubHeader();
	RenderBackground();
	RenderOptionHighlight();
	RenderFooter();

}

void Renderer::RenderHeader()
{
	pRenderer.DrawRect(pMenu.fScaledXCoord + pMenu.uiPos.x, 0.09733f + pMenu.uiPos.y, 0.22500f, 0.09000f, pMenu.HeaderColor); //banner 
	pRenderer.DrawSprite({ "header", "header" }, pMenu.fScaledXCoord + pMenu.uiPos.x, 0.09680f + pMenu.uiPos.y, 0.225f, 0.09f, 0.0f, { 255, 255, 255, 255 });
}

void Renderer::RenderSubHeader()
{
		pRenderer.DrawRect(pMenu.fScaledXCoord + pMenu.uiPos.x, 0.16027f + pMenu.uiPos.y, 0.22500f, 0.03753f, pMenu.SubHeaderColor); //sub banner
	pRenderer.DrawString(va("%i / %i", pMenu.iCurrentOption + 1, pSubmenuHandler.GetTotalOptions()), 0.958f + pMenu.uiPos.x, 0.14587f, 0, 0.37f, pMenu.SubMenuTitleColor, false, JustifyRight);
}

void Renderer::RenderBackground() {
	DrawSprite({ "commonmenu", "gradient_bgd" }, pMenu.fScaledXCoord + pMenu.uiPos.x, (0.198f + ((0.019f - 0.00040f) * (fRenderOptions - 1))) + pMenu.uiPos.y, 0.225f, (0.040f + ((0.037f + 0.00010f) * (fRenderOptions - 1))), 0.0f, pMenu.BackgroundColor); //background
}

void Renderer::RenderOptionHighlight() {
	pMenu.iCurrentRenderingScroll = Clamp(pMenu.iCurrentOption - pMenu.iScrollOffset > pMenu.iMaxOptions ? pMenu.iMaxOptions : (pMenu.iCurrentOption - pMenu.iScrollOffset) + 1, 0, pMenu.iMaxOptions);

	DrawRect(pMenu.fScaledXCoord + pMenu.uiPos.x, (0.161333f + (pMenu.iCurrentRenderingScroll * fOptionHeight)) + pMenu.uiPos.y, 0.225f, 0.03753f, pMenu.ScrollBarColor);
}

void Renderer::RenderFooter() {
	int index = pSubmenuHandler.GetTotalOptions() > pMenu.iMaxOptions ? pMenu.iMaxOptions : pSubmenuHandler.GetTotalOptions();
	if (pSubmenuHandler.GetTotalOptions() > pMenu.iMaxOptions) {
		DrawRect(pMenu.fScaledXCoord + pMenu.uiPos.x, ((0.1996f + ((0.03753f - 0.00030f) * index))) + pMenu.uiPos.y, 0.225f, 0.03753f, pMenu.SubHeaderColor); //sub banner
		DrawSprite({ "commonmenu", "shop_arrows_upanddown" }, pMenu.fScaledXCoord + pMenu.uiPos.x, (0.1996f + ((0.03753f - 0.00030f) * index)) + pMenu.uiPos.y, 0.023f, 0.037f, 0.f, pMenu.MenuTextColor);
	}
	else {
		DrawRect(pMenu.fScaledXCoord + pMenu.uiPos.x, ((0.1996f + ((0.03753f - 0.00030f) * index))) + pMenu.uiPos.y, 0.225f, 0.03753f, pMenu.SubHeaderColor); //sub banner
		DrawSprite({ "commonmenu", "shop_arrows_upanddown" }, pMenu.fScaledXCoord + pMenu.uiPos.x, (0.1996f + ((0.03753f - 0.00030f) * index)) + pMenu.uiPos.y, 0.023f, 0.037f, 0.f, pMenu.MenuTextColor);
	}
}

float func_444(float fParam0, float fParam1, float fParam2) {
	float fVar0;
	if (fParam1 == fParam2) {
		return fParam1;
	}
	fVar0 = fParam2 - fParam1;
	fParam0 -= SYSTEM::TO_FLOAT(SYSTEM::ROUND(fParam0 - fParam1 / fVar0)) * fVar0;
	if (fParam0 < fParam1) {
		fParam0 += fVar0;
	}
	return fParam0;
}

void Renderer::RenderGlobe() {
	if (pMenu.bRenderGlobe) {
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(pMenu.globe_handle)) {
			pMenu.globe_handle = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_MENU_GLARE");
		}
		else {
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(pMenu.globe_handle, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(func_444(CAM::GET_GAMEPLAY_CAM_ROT(2).z, 0.0f, 360.0f));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::DRAW_SCALEFORM_MOVIE(pMenu.globe_handle, (pMenu.fScaledXCoord + 0.333f) + pMenu.uiPos.x, (0.04633f + 0.399f + 0.051f) + pMenu.uiPos.y, 0.98f, 1.02f + -0.032f, 255, 255, 255, 255, 0);
	}
}
void Renderer::Set2DLayer(int layer) {
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(layer);
	m_2DLayer = layer;
}
void Renderer::DrawBox(float x, float y, float width, float height, String title, bool gradients, Texture texture, bool customColor, Color color) {
	if (gradients && pRenderer.OptionColor.m_r == 0 && pRenderer.OptionColor.m_g == 0 && pRenderer.OptionColor.m_b == 0 && pRenderer.OptionColor.m_a == 255) {
		pRenderer.DrawSprite(texture, x, y - height / 2 + pRenderer.m_dialogHeaderHeight / 2, width, pRenderer.m_dialogHeaderHeight, 0.0f, { pRenderer.OptionColor.m_r, pRenderer.OptionColor.m_g, pRenderer.OptionColor.m_b, pRenderer.OptionColor.m_a });
		pRenderer.DrawSprite(texture, x, y + height / 2 - pRenderer.m_dialogFooterHeight / 2, width, pRenderer.m_dialogFooterHeight, 180, { pRenderer.OptionColor.m_r, pRenderer.OptionColor.m_g, pRenderer.OptionColor.m_b, pRenderer.OptionColor.m_a });
		//DrawRect(x, y, width, height, { customColor ? color.m_r : m_cPrimary.m_r, customColor ? color.m_g : m_cPrimary.m_g, customColor ? color.m_b : m_cPrimary.m_b, customColor ? color.m_a : (int)m_bgOpacity * 255 / 100 });
		pRenderer.DrawRect(x, y + pRenderer.m_dialogHeaderHeight / 2 - pRenderer.m_dialogFooterHeight / 2, width, height - pRenderer.m_dialogHeaderHeight - pRenderer.m_dialogFooterHeight, { pRenderer.m_cPrimary.m_r, pRenderer.m_cPrimary.m_g, pRenderer.m_cPrimary.m_b, (int)pRenderer.fBgOpacity * 255 / 100 });
	}
	else pRenderer.DrawRect(x, y, width, height, { customColor ? color.m_r : pRenderer.m_cPrimary.m_r, customColor ? color.m_g : pRenderer.m_cPrimary.m_g, customColor ? color.m_b : pRenderer.m_cPrimary.m_b, customColor ? color.m_a : (int)pRenderer.fBgOpacity * 255 / 100 });


	pRenderer.DrawString(title, x - width / 2 + 0.01f, y - height / 2 + 0.005f, 7, 0.5f, pRenderer.OptionColor, true);

	pRenderer.DrawRect(x, y - height / 2, width + pRenderer.fLineWidth * 2, pRenderer.fLineWidth, pRenderer.m_cPrimary); //Top
	pRenderer.DrawRect(x, y + height / 2, width + pRenderer.fLineWidth * 2, pRenderer.fLineWidth, pRenderer.m_cPrimary); //Bottom
	pRenderer.DrawRect(x - width / 2, y, pRenderer.fLineWidth, height + pRenderer.fLineWidth * 2, pRenderer.m_cPrimary); //Left
	pRenderer.DrawRect(x + width / 2, y, pRenderer.fLineWidth, height + pRenderer.fLineWidth * 2, pRenderer.m_cPrimary); //Right

	pRenderer.DrawRect(x, y - height / 2 - pRenderer.fLineWidth, width + pRenderer.fLineWidth * 2, pRenderer.fLineWidth, pRenderer.m_cOutline); //Top
	pRenderer.DrawRect(x, y + height / 2 + pRenderer.fLineWidth, width + pRenderer.fLineWidth * 2, pRenderer.fLineWidth, pRenderer.m_cOutline); //Bottom
	pRenderer.DrawRect(x - width / 2 - pRenderer.fLineWidth, y, pRenderer.fLineWidth, height + pRenderer.fLineWidth * 3, pRenderer.m_cOutline); //Left
	pRenderer.DrawRect(x + width / 2 + pRenderer.fLineWidth, y, pRenderer.fLineWidth, height + pRenderer.fLineWidth * 3, pRenderer.m_cOutline); //Right
}
void Renderer::RenderTooltip(String toRender) {
	int prefLayer = Get2DLayer();
	int offset = 0;
	Set2DLayer(8);
	//DrawSprite(m_hTooltip, 0.50f, 0.85f, 0.26f, 0.07f, 0, { 255, 255, 255, 255 });
	pRenderer.DrawBox(0.50f, 0.85f, 0.26f, 0.07f, "", true, pRenderer.m_hDialogBox, true, { m_cPrimary.m_r, m_cPrimary.m_g, m_cPrimary.m_b, 155 });
	DrawString(toRender, 0.38f, 0.822f, FontChaletLondon, 0.3f, { 255, 255, 255, 255 }, false, 1, 0.38f);
}

float Renderer::GetStringWidth(const char* str, int font, float fontsize) {
	if (font == FontChaletLondon) fontsize *= 0.75f;
	HUD::_BeginTextCommandWidth("STRING");
	HUD::AddTextComponentSubstringPlayerName(str);
	HUD::SetTextFont(font);
	HUD::SetTextScale(fontsize, fontsize);
	return HUD::_EndTextCommandGetWidth(font);
}

float Renderer::GetStringHeight(int font, float fontsize) {
	return HUD::_GetTextScaleHeight(fontsize, font);
}

void Renderer::NotifyBottom(const char* pText, int duration) {
	HUD::BeginTextCommandPrint("STRING");
	HUD::AddTextComponentSubstringPlayerName(pText);
	HUD::EndTextCommandPrint(duration, 1);
}

void Renderer::NotifyMap(const char* pText) {
	HUD::_SetNotificationTextEntry("STRING");
	HUD::AddTextComponentSubstringPlayerName(pText);
	HUD::EndTextCommandPrint(4000, 1);
}

void Renderer::NotifyMapColor(const char* pText, int color) {
	HUD::_SetNotificationTextEntry("STRING");
	HUD::AddTextComponentSubstringPlayerName(pText);
	HUD::_DrawNotification(false, true);
}

void Renderer::DrawInWorldBox(Entity entity, Color color) {
	Vector3 Min;
	Vector3 Max;
	MISC::GetModelDimensions(ENTITY::GET_ENTITY_MODEL(entity), &Min, &Max);
	float BoxWidth = Max.x * 2;
	float BoxLength = Max.y * 2;
	float BoxHeight = Max.z * 2;

	Vector3 P1 = GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(entity, (BoxWidth / 2) * -1, (BoxLength / 2), BoxHeight / 2);
	Vector3 P4 = GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(entity, BoxWidth / 2, (BoxLength / 2), BoxHeight / 2);
	Vector3 P5 = GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(entity, (BoxWidth / 2) * -1, (BoxLength / 2), (BoxHeight / 2) * -1);
	Vector3 P7 = GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(entity, BoxWidth / 2, (BoxLength / 2), (BoxHeight / 2) * -1);
	Vector3 P2 = GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(entity, (BoxWidth / 2) * -1, (BoxLength / 2) * -1, BoxHeight / 2);
	Vector3 P3 = GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(entity, BoxWidth / 2, (BoxLength / 2) * -1, BoxHeight / 2);
	Vector3 P6 = GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(entity, (BoxWidth / 2) * -1, (BoxLength / 2) * -1, (BoxHeight / 2) * -1);
	Vector3 P8 = GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(entity, BoxWidth / 2, (BoxLength / 2) * -1, (BoxHeight / 2) * -1);

	DrawLine(P1.x, P1.y, P1.z, P4.x, P4.y, P4.z, color);
	DrawLine(P1.x, P1.y, P1.z, P2.x, P2.y, P2.z, color);
	DrawLine(P1.x, P1.y, P1.z, P5.x, P5.y, P5.z, color);
	DrawLine(P2.x, P2.y, P2.z, P3.x, P3.y, P3.z, color);
	DrawLine(P3.x, P3.y, P3.z, P8.x, P8.y, P8.z, color);
	DrawLine(P4.x, P4.y, P4.z, P7.x, P7.y, P7.z, color);
	DrawLine(P4.x, P4.y, P4.z, P3.x, P3.y, P3.z, color);
	DrawLine(P5.x, P5.y, P5.z, P7.x, P7.y, P7.z, color);
	DrawLine(P6.x, P6.y, P6.z, P2.x, P2.y, P2.z, color);
	DrawLine(P6.x, P6.y, P6.z, P8.x, P8.y, P8.z, color);
	DrawLine(P5.x, P5.y, P5.z, P6.x, P6.y, P6.z, color);
	DrawLine(P7.x, P7.y, P7.z, P8.x, P8.y, P8.z, color);
}