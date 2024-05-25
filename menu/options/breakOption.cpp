#include "stdafx.h"

void BreakOption::Render(int position) {

	pRenderer.DrawString(Name.c_str(), pMenu.fScaledXCoord + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.11f) + pMenu.uiPos.y, FontHouseScript, 0.37f, pMenu.SubMenuTitleColor, false, -2);
}

void BreakOption::RenderSelected(int position) {
	switch (pMenu.iBreakScroll) {
	case 1: //Up
		if (pMenu.iScrollOffset > 0 && pMenu.iCurrentOption - pMenu.iScrollOffset == 0)pMenu.iScrollOffset--;
		if (pMenu.iCurrentOption - 1 < 0)Bottom();
		else pMenu.iCurrentOption--;
		break;
	case 2: //Down
		if (pMenu.iScrollOffset < pSubmenuHandler.GetTotalOptions() - pMenu.iMaxOptions && pMenu.iCurrentOption + 1 - pMenu.iScrollOffset == pMenu.iMaxOptions) pMenu.iScrollOffset++;
		if (pMenu.iCurrentOption + 1 >= pSubmenuHandler.GetTotalOptions())Top();
		else pMenu.iCurrentOption++;
		break;
	case 3: //Bottom
		if (pMenu.iScrollOffset > 0 && pMenu.iCurrentOption - pMenu.iScrollOffset == 1)pMenu.iScrollOffset--;
		pMenu.iCurrentOption--; break;
	case 4: //Top
		if (pMenu.iScrollOffset < pSubmenuHandler.GetTotalOptions() - pMenu.iMaxOptions && pSubmenuHandler.GetTotalOptions() >= pMenu.iMaxOptions && pMenu.iCurrentOption - pMenu.iScrollOffset == pMenu.iMaxOptions) pMenu.iScrollOffset++;
		pMenu.iCurrentOption++; break;
	default:
		break;
	}
}