#pragma once

static bool IsOpenPressed() {
	return ((PAD::IsDisabledControlPressed(2, INPUT_FRONTEND_RB) && PAD::IsDisabledControlPressed(2, INPUT_FRONTEND_LEFT)) || KeyJustUp(pMenu.m_openKey));
}
static bool IsAJPressed(bool overrideInput = false) {
	return KeyJustDown(VK_RETURN);
}
static bool IsBJPressed() {
	return KeyJustDown(VK_BACK);
}
static bool IsRPressed() {
	if (KeyDown(VK_RIGHT)) return true; else return false;
}
static bool IsRJPressed() {
	if (KeyJustUp(VK_RIGHT)) return true; else return false;
}
static bool IsLPressed() {
	if (KeyDown(VK_LEFT)) return true; else return false;
}
static bool IsLJPressed() {
	if (KeyJustUp(VK_LEFT)) return true; else return false;
}
static bool IsUPressed() {
	if (PAD::IsDisabledControlPressed(2, INPUT_FRONTEND_UP) || KeyDown(VK_UP)) return true; else return false;
}
static bool IsUJPressed() {
	if (PAD::IsDisabledControlJustReleased(2, INPUT_FRONTEND_UP) || KeyJustUp(VK_UP)) return true; else return false;
}
static bool IsDPressed() {
	if (PAD::IsDisabledControlPressed(2, INPUT_FRONTEND_DOWN) || KeyDown(VK_DOWN)) return true; else return false;
}
static bool IsDJPressed() {
	if (PAD::IsDisabledControlJustReleased(2, INPUT_FRONTEND_DOWN) || KeyJustUp(VK_DOWN)) return true; else return false;
}
static bool IsOptionPressed() {
	if (IsAJPressed()) {
		AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
		return true;
	}
	return false;
}
inline bool hideuicursortooltip;
inline int m_mouseKey = 'X';
static TranslationString strEnableCursor("Toggle cursor on", true, true);
static TranslationString strDisableCursor("Toggle cursor off", true, true);
static void MouseInput() {
	if (GetMouse()->IsEnabled()) {
		HUD::_ShowCursorThisFrame();
	}
	if (hideuicursortooltip) GetScaleform()->DrawInstructional(GetMouse()->IsEnabled() ? strDisableCursor.Get() : strEnableCursor.Get(), g_keyNamesInstructional[m_mouseKey]);
	if (KeyJustUp(m_mouseKey)) GetMouse()->ToggleMouse();
}
static void Up() {
	if (pSubmenuHandler.GetTotalOptions() == 0) return;
	pMenu.iCurrentOption--;
	if (pMenu.iScrollOffset > 0 && pMenu.iCurrentOption - pMenu.iScrollOffset == -1)pMenu.iScrollOffset--;
	AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
	pMenu.iBreakScroll = 1;
}
static void Down() {
	if (pSubmenuHandler.GetTotalOptions() == 0) return;
	pMenu.iCurrentOption++;
	if (pMenu.iScrollOffset < pSubmenuHandler.GetTotalOptions() - pMenu.iMaxOptions && pMenu.iCurrentOption - pMenu.iScrollOffset == pMenu.iMaxOptions) pMenu.iScrollOffset++;
	if (pSubmenuHandler.GetTotalOptions() >= pMenu.iMaxOptions && pMenu.iScrollOffset > pSubmenuHandler.GetTotalOptions() - pMenu.iMaxOptions) pMenu.iScrollOffset = pSubmenuHandler.GetTotalOptions() - pMenu.iMaxOptions;
	AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
	pMenu.iBreakScroll = 2;
}
static void Bottom() {
	if (pSubmenuHandler.GetTotalOptions() == 0) return;
	pMenu.iCurrentOption = pSubmenuHandler.GetTotalOptions() - 1;
	if (pSubmenuHandler.GetTotalOptions() >= pMenu.iMaxOptions) pMenu.iScrollOffset = pSubmenuHandler.GetTotalOptions() - pMenu.iMaxOptions;
	AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
	pMenu.iBreakScroll = 3;
}
static void Top() {
	if (pSubmenuHandler.GetTotalOptions() == 0) return;
	pMenu.iCurrentOption = 0;
	pMenu.iScrollOffset = 0;
	AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
	pMenu.iBreakScroll = 4;
}

static void MenuControls() {
	if (pMenu.IsMenuInputDisabled()) return;
	static int counter;
	static int delaytick = 150;
	pMenu.bLeftPress = false;
	pMenu.bRightPress = false;

	if (counter < GetTickCount()) {
		if (IsOpenPressed()) {
			pMenu.bOpen = !pMenu.bOpen;
			counter = GetTickCount() + delaytick;
		}
		else if (pMenu.IsOpen()) {
			if (IsUPressed()) {
				if (pMenu.iCurrentOption == 0)
					Bottom();
				else
					Up();
				if (delaytick > 80) delaytick -= 15;
			}
			else if (IsDPressed()) {
				if (pMenu.iCurrentOption == pSubmenuHandler.GetTotalOptions() - 1)
					Top();
				else
					Down();
			}
			else if (IsBJPressed()) {
				pSubmenuHandler.SetSubPrevious();
			}
			else if (IsLPressed()) {
				pMenu.bLeftPress = true;
			}
			else if (IsRPressed()) {
				pMenu.bRightPress = true;
			}
			else {
				delaytick = 150;
				return;
			}
			if (delaytick > 80) delaytick -= 15;
			counter = GetTickCount() + delaytick;
		}
	}
}

static bool IsSavePressed() {
	return KeyJustUp(VK_F11);
}

static void PrepareMenu() {

	//if (HUD::IsPauseMenuActive()) GetWindowManager()->close();
	MOBILE::SetMobilePhonePosition(0, 0, 0);
	HUD::HideHudComponentThisFrame(5);
	HUD::DisplayAmmoThisFrame(0);
	HUD::SetRadarZoom(0);
	HUD::DisplayCash(1);
	//Remove notifications
	//HUD::CLEAR_PRINTS();
	HUD::ClearBrief();
	HUD::ClearAllHelpMessages();
}

static void DisableControls() {
	using namespace HUDComponents;

	HUD::HideHelpTextThisFrame();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);

	HUD::HideHudComponentThisFrame(HUD_HELP_TEXT);
	HUD::HideHudComponentThisFrame(HUD_VEHICLE_NAME);
	HUD::HideHudComponentThisFrame(HUD_AREA_NAME);
	HUD::HideHudComponentThisFrame(HUD_STREET_NAME);
	HUD::HideHudComponentThisFrame(HUD_VEHICLE_CLASS);

	PAD::SetInputExclusive(2, INPUT_FRONTEND_ACCEPT);
	PAD::SetInputExclusive(2, INPUT_FRONTEND_CANCEL);
	PAD::SetInputExclusive(2, INPUT_FRONTEND_DOWN);
	PAD::SetInputExclusive(2, INPUT_FRONTEND_UP);
	PAD::SetInputExclusive(2, INPUT_FRONTEND_LEFT);
	PAD::SetInputExclusive(2, INPUT_FRONTEND_RIGHT);
	PAD::DisableControlAction(0, INPUT_NEXT_CAMERA, true);
	PAD::DisableControlAction(0, INPUT_VEH_SELECT_NEXT_WEAPON, true);
	PAD::DisableControlAction(0, INPUT_FRONTEND_RIGHT, true);
	PAD::DisableControlAction(0, INPUT_FRONTEND_DOWN, true);
	PAD::DisableControlAction(0, INPUT_FRONTEND_LEFT, true);
	PAD::DisableControlAction(0, INPUT_FRONTEND_UP, true);
	PAD::DisableControlAction(0, INPUT_ARREST, true);
	PAD::DisableControlAction(0, INPUT_CONTEXT, true);
	PAD::DisableControlAction(0, INPUT_MELEE_BLOCK, true);
	PAD::DisableControlAction(2, INPUT_FRONTEND_UP, true);
	PAD::DisableControlAction(0, INPUT_HUD_SPECIAL, true);
	PAD::DisableControlAction(0, INPUT_VEH_CIN_CAM, true);
	PAD::DisableControlAction(2, INPUT_VEH_CIN_CAM, true);
	PAD::DisableControlAction(0, INPUT_VEH_HEADLIGHT, true);
	PAD::DisableControlAction(2, INPUT_FRONTEND_LEFT, true);
	PAD::DisableControlAction(2, INPUT_FRONTEND_DOWN, true);
	PAD::DisableControlAction(2, INPUT_FRONTEND_RDOWN, true);
	PAD::DisableControlAction(2, INPUT_FRONTEND_RIGHT, true);
	PAD::DisableControlAction(0, INPUT_CHARACTER_WHEEL, true);
	PAD::DisableControlAction(0, INPUT_VEH_RADIO_WHEEL, true);
	PAD::DisableControlAction(2, INPUT_FRONTEND_CANCEL, true);
	PAD::DisableControlAction(0, INPUT_MELEE_ATTACK_LIGHT, true);
	PAD::DisableControlAction(0, INPUT_MELEE_ATTACK_HEAVY, true);
	PAD::DisableControlAction(0, INPUT_SELECT_CHARACTER_TREVOR, true);
	PAD::DisableControlAction(0, INPUT_SELECT_CHARACTER_MICHAEL, true);
	PAD::DisableControlAction(0, INPUT_SELECT_CHARACTER_FRANKLIN, true);
	PAD::DisableControlAction(0, INPUT_SELECT_CHARACTER_MULTIPLAYER, true);
}