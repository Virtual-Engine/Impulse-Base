#include "stdafx.h"

void SubmenuOption::RenderSelected(int position) {
	CurrentOp();
	if (IsOptionPressed() && Requirement()) {
		Function();
		pSubmenuHandler.SetSubmenu(pSubmenu);
	}
};

void SubmenuOption::Render(int position) {
	OnUpdate(this);

	Color color = pMenu.IsSelected(position) ? pMenu.HighlightedOptionColor : pMenu.MenuTextColor;
	pRenderer.DrawString(Name.c_str(), 0.742f + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.11f) + pMenu.uiPos.y, pRenderer.iTextFont, 0.37f, color);
	pRenderer.DrawSprite({ "commonmenu", "arrowright" }, (0.742f + pMenu.uiPos.x - (0.01f / 2) - 0.7f) + 0.22f, ((position + 2) * 0.037f + 0.112f) + pMenu.uiPos.y + 0.001f + 0.012f, 0.015f, 0.025f, 0.f, color);
}