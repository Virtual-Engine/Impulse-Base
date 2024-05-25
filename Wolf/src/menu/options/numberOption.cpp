#include "stdafx.h"

template <class Type>
void NumberOption<Type>::Render(int position) {
	OnUpdate(this);
	bool current = pMenu.IsSelected(position);

	Color textColor = current ? pMenu.HighlightedOptionColor : pMenu.MenuTextColor;

	Color color;
	switch (ScrollType) {
	case TOGGLE:
		pRenderer.DrawString(va(Format, *pNumber), 0.658f + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.11f) + pMenu.uiPos.y, pRenderer.iTextFont, 0.37f, textColor, false, 2, current ? 0.028f : 0.014f);

		color = *pBool ? Color(130, 214, 157) : Color(200, 55, 80);
		if (pMenu.iToggleStyle == 0) {
			if (*pBool)
				pRenderer.DrawSprite({ "commonmenu", pMenu.IsSelected(position) ? "shop_box_tickb" : "shop_box_tick" }, 0.952f + pMenu.uiPos.x, (((position + 2) * 0.037f + 0.11f) + 0.01425f) + pMenu.uiPos.y, 0.022f, 0.039f, 0, Color(255, 255, 255));
			else
				pRenderer.DrawSprite({ "commonmenu", pMenu.IsSelected(position) ? "shop_box_blankb" : "shop_box_blank" }, 0.952f + pMenu.uiPos.x, (((position + 2) * 0.037f + 0.11f) + 0.01425f) + pMenu.uiPos.y, 0.022f, 0.039f, 0, Color(255, 255, 255));
		}
		else if (pMenu.iToggleStyle == 1) {
			pRenderer.DrawSprite({ "commonmenu", "common_medal" }, 0.952f + pMenu.uiPos.x, (((position + 2) * 0.037f + 0.11f) + 0.01425f) + pMenu.uiPos.y, 0.022f, 0.039f, 0, color);
		}
		//pRenderer.DrawSprite(Texture("commonmenu", "common_medal"), 0.952f + pMenu.uiPos.x - 0.7f, ((position + 2) * 0.037f + 0.12325f) + pMenu.uiPos.y, 0.022f, 0.039f, 0, color);

		if (current)
			pRenderer.DrawSprite({ "commonmenu", "shop_arrows_upanddown" }, 0.937f + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.124f) + pMenu.uiPos.y, 0.023f, 0.037f, 90.f, textColor);

		break;
	case SELECT:
		pRenderer.DrawString(va(Format, *pNumber), 0.958f + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.11f) + pMenu.uiPos.y, pRenderer.iTextFont, 0.37f, textColor, false, 2, current ? 0.028f : 0.014f);

		color = *pBool ? Color(130, 214, 157) : Color(200, 55, 80);
		if (pMenu.iToggleStyle == 0) {
			if (*pBool)
				pRenderer.DrawSprite({ "commonmenu", pMenu.IsSelected(position) ? "shop_box_tickb" : "shop_box_tick" }, 0.952f + pMenu.uiPos.x, (((position + 2) * 0.037f + 0.11f) + 0.01425f) + pMenu.uiPos.y, 0.022f, 0.039f, 0, Color(255, 255, 255));
			else
				pRenderer.DrawSprite({ "commonmenu", pMenu.IsSelected(position) ? "shop_box_blankb" : "shop_box_blank" }, 0.952f + pMenu.uiPos.x, (((position + 2) * 0.037f + 0.11f) + 0.01425f) + pMenu.uiPos.y, 0.022f, 0.039f, 0, Color(255, 255, 255));
		}
		else if (pMenu.iToggleStyle == 1) {
			pRenderer.DrawSprite({ "commonmenu", "common_medal" }, 0.952f + pMenu.uiPos.x, (((position + 2) * 0.037f + 0.11f) + 0.01425f) + pMenu.uiPos.y, 0.022f, 0.039f, 0, color);
		}
		//pRenderer.DrawSprite(Texture("commonmenu", "common_medal"), 0.952f + pMenu.uiPos.x - 0.7f, ((position + 2) * 0.12325f) + pMenu.uiPos.y, 0.022f, 0.039f, 0, color);

		if (current)
			pRenderer.DrawSprite({ "commonmenu", "shop_arrows_upanddown" }, 0.937f + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.124f) + pMenu.uiPos.y, 0.023f, 0.037f, 90.f, textColor);

		break;
	case SCROLL:
	case SCROLLSELECT:
		pRenderer.DrawString(va(Format, *pNumber), 0.958f + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.11f) + pMenu.uiPos.y, pRenderer.iTextFont, 0.37f, textColor, false, 2, current ? 0.015f : 0.0f);

		if (current)
			pRenderer.DrawSprite({ "commonmenu", "shop_arrows_upanddown" }, 0.951f + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.124f) + pMenu.uiPos.y, 0.023f, 0.037f, 90.f, textColor);

		break;
	}

	pRenderer.DrawString(Name.c_str(), 0.742f + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.11f) + pMenu.uiPos.y, pRenderer.iTextFont, 0.37f, textColor);

}



template <class Type>
void NumberOption<Type>::RenderSelected(int position) {
	CurrentOp();
	if (IsOptionPressed() && Requirement()) {
		switch (ScrollType) {
		case TOGGLE: *pBool ^= true; break;
		case SELECT: *pSelectedNumber = *pNumber; break;
		}

		Function();
	}

	if (pMenu.bLeftPress) {
		*pNumber -= Step;
		if (bLoop) {
			if (*pNumber < Min) *pNumber = Max;
		}
		else if (*pNumber < Min && bHasMin) *pNumber = Min;
		if (ScrollType == SCROLL || (ScrollType == TOGGLE && *pBool)) Function();
	}

	// Scroll right
	if (pMenu.bRightPress) {
		*pNumber += Step;
		if (bLoop) {
			if (*pNumber > Max) *pNumber = Min;
		}
		else if (*pNumber > Max && bHasMax) *pNumber = Max;
		if (ScrollType == SCROLL || (ScrollType == TOGGLE && *pBool)) Function();
	}



}

template class NumberOption<int>;
template class NumberOption<float>;
template class NumberOption<int64_t>;
template class NumberOption<int32_t>;
