#include "stdafx.h"

void ToggleOption::Render(int position) {
	OnUpdate(this);

	Color color = pMenu.IsSelected(position) ? pMenu.HighlightedOptionColor : pMenu.MenuTextColor;
	pRenderer.DrawString(Name.c_str(), 0.742f + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.11f) + pMenu.uiPos.y, pRenderer.iTextFont, 0.37f, color);

	color = *pBool ? Color(130, 214, 157) : Color(200, 55, 80);


	if (*pBool)
		pRenderer.DrawSprite({ "commonmenu", pMenu.IsSelected(position) ? "shop_box_tickb" : "shop_box_tick" }, 0.952f + pMenu.uiPos.x, (((position + 2) * 0.037f + 0.11f) + 0.01425f) + pMenu.uiPos.y, 0.027f, 0.046f, 0, Color(255, 255, 255));
	else
		pRenderer.DrawSprite({ "commonmenu", pMenu.IsSelected(position) ? "shop_box_blankb" : "shop_box_blank" }, 0.952f + pMenu.uiPos.x, (((position + 2) * 0.037f + 0.11f) + 0.01425f) + pMenu.uiPos.y, 0.027f, 0.046f, 0, Color(255, 255, 255));


}


void ToggleOption::RenderSelected(int position) {
	CurrentOp();
	if (IsOptionPressed() && Requirement()) {
		*pBool ^= true;
		Function();
	}
};