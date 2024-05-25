#include "stdafx.h"

Menu pMenu;

void Menu::Initialize() {
	bRenderOpenTip = true;
	bRenderGlobe = true;
	bDisplayPlayerInfoBox = true;

	iMaxOptions = 14;
	iCurrentOption = 0;
	iPreviousOption = 0;
	iToggleStyle = 1;

	HeaderColor = Color(255, 255, 255, 255);
	SubHeaderColor = Color(0, 0, 0, 210);
	TitleColor = Color(255, 255, 255);
	SubMenuTitleColor = Color(255, 255, 255);
	BackgroundColor = Color(0, 0, 0, 190);
	MenuTextColor = Color(255, 255, 255);
	HighlightedOptionColor = Color(0, 0, 0);
	ScrollBarColor = Color(255, 255, 255);

	pSubmenuHandler.Init();
	LOG_PRINT("Initialized menu handler");
	time_t epoch = time(0);
}

void Menu::Update() {

	

	if (pMenu.bDisableGTAInputThisFrame) {
		PAD::DisableAllControlActions(0);
		pMenu.bDisableGTAInputThisFrame = false;
		pMenu.bDisabledGTAInputLastFrame = true;
	}else if (pMenu.bDisabledGTAInputLastFrame) {
		PAD::EnableAllControlActions(2);
		pMenu.bDisabledGTAInputLastFrame = false;
	}

	if (pMenu.bDisableMenuInputThisFrame) {
		pMenu.bMenuInputDisabled = true;
		pMenu.bDisableMenuInputThisFrame = false;
	}else pMenu.bMenuInputDisabled = false;

	if (KeyJustUp(VK_DELETE)) Backend::Cleanup();

	GetScaleform()->PrepareInstructionalButtons();
	GetScaleform()->DrawInstructional("Open Pegasus ", g_keyNamesInstructional[pMenu.m_openKey]);

	MouseInput();
	MenuControls();

	static bool initRes = false;
	if (!initRes) {
		initRes = true;
		GRAPHICS::GET_SCREEN_RESOLUTION(&pMenu.iScreenResolutionX, &pMenu.iScreenResolutionY);
	}
	pMenu.fScaledXCoord = static_cast<float>(pMenu.iScreenResolutionX) / (118.257f * 12.740f);
	if (pMenu.IsOpen()) {
		PrepareMenu();
		DisableControls();
		pRenderer.Render();
		pSubmenuHandler.Update(false);
	}
	GetScaleform()->FinishInstructionalButtons();
}

void Menu::ASyncUpdate() {
	g_playerManager.Update();
}


bool Menu::IsSelected(int sub) {
	return pMenu.iCurrentRenderingScroll == (sub + 1);
}