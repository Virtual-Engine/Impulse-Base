#pragma once

class Menu {
public:
	bool bDisableGTAInputThisFrame;
	bool bDisabledGTAInputLastFrame;
	bool bDisableMenuInputThisFrame;
	bool bMenuInputDisabled;

	void DisableAllInputThisFrame() { bDisableGTAInputThisFrame = true; bDisableMenuInputThisFrame = true; }
	void DisableGTAInputThisFrame() { bDisableGTAInputThisFrame = true; }
	void DisableMenuInputThisFrame() { bDisableMenuInputThisFrame = true; }
	static void Update();
	static void ASyncUpdate();
	void Initialize();

	bool IsMenuInputDisabled() { return bMenuInputDisabled; }
	bool IsOpen() { return bOpen; }
	bool IsSelected(int sub);

	bool bOpen;
	bool bFirstOpen;
	bool bLeftPress;
	bool bRightPress;
	bool bRenderOpenTip;
	bool bRenderGlobe;
	bool bDisplayPlayerInfoBox;

	int iMaxOptions;
	int iCurrentOption;
	int iPreviousOption;
	int iCurrentRenderingScroll;
	int iScrollOffset;
	int iBreakScroll;
	int iScreenResolutionX;
	int iScreenResolutionY;
	int globe_handle;
	int iToggleStyle;
	int iSubmenuIdentifierStyle = 1;
	int m_openKey = VK_F4;

	float fScaledXCoord;

	Vector2 uiPos;
	vector<pair<Color*, bool*>> MenuColors;

	Color HeaderColor;
	Color SubHeaderColor;
	Color TitleColor;
	Color SubMenuTitleColor;
	Color BackgroundColor;
	Color MenuTextColor;
	Color HighlightedOptionColor;
	Color ScrollBarColor;

	void ResetCurrentOption() {
		iCurrentOption = 0;
		iScrollOffset = 0;
	}
};

extern Menu pMenu;