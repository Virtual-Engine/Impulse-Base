#pragma once
#include "menu/menu.h"

template <typename Type>
struct ScrollStruct {
	TranslationString Name;
	Type Result;
};

template <typename Type>
class ScrollOption : public Option {
private:
	function<void(ScrollOption*)> OnUpdate;
	function<void()> CurrentOp;
	function<void()> Function;

	ScrollOptionType ScrollType;
	int* pNumber;
	shared_ptr<int> SelectedNumberStorage;
	int* pSelectedNumber;
	bool* pBool;
	int nMin;
	int nMax;
	int iConfigType;

	DWORD64 dwScrollSpeed;

	bool bHasMin;
	bool bHasMax;
	bool bLoop;
	bool CanSaveToConfig;


	/*Scrolling*/
	bool leftDisabled = false;
	bool rightDisabled = false;
	int leftTimer = 0;
	int rightTimer = 0;

	ScrollStruct<Type>* pScrollStruct;

public:
	ScrollOption(ScrollOptionType type, const char* name) : Option(name), ScrollType(type), bHasMin(false), bHasMax(false), bLoop(false), CanSaveToConfig(false), dwScrollSpeed(100), iConfigType(0), Function([] {}), OnUpdate([](ScrollOption* option) {}), CurrentOp([] {}) {}

	ScrollOption& addScroll(int& number, int min, int max, ScrollStruct<Type>* scrollStruct) {
		if (ScrollType == SELECT) {
			SelectedNumberStorage = make_shared<int>(0);
			pSelectedNumber = SelectedNumberStorage.get();
		}
		bHasMin = true;
		bHasMax = true;
		nMin = min;
		nMax = max;
		pNumber = &number;
		pScrollStruct = scrollStruct;
		return *this;
	}

	ScrollOption& addToggle(bool& toggle) {
		pBool = &toggle;
		return *this;
	}

	ScrollOption& addSelectedNumber(int& selectedNumber) {
		pSelectedNumber = &selectedNumber;
		return *this;
	}

	ScrollOption& addRequirement(function<bool()> func) {
		Requirement = func;
		return *this;
	}

	ScrollOption& addFunction(function<void()> func) {
		Function = func;
		return *this;
	}

	ScrollOption& addOnUpdate(function<void(ScrollOption*)> update) {
		OnUpdate = update;
		return *this;
	}

	ScrollOption& addOnUpdate(function<void()> update) {
		OnUpdate = [=](ScrollOption* option) {update(); };
		return *this;
	}

	ScrollOption& addCurrentOp(function<void()> func) {
		CurrentOp = func;
		return *this;
	}

	ScrollOption& addTranslation() {
		return *this;
	}

	ScrollOption& canLoop() {
		bLoop = true;
		return *this;
	}

	ScrollOption& addTooltip(const char* tooltip) {
		Tooltip = tooltip;
		return *this;
	}

	ScrollOption& addCanSaveToConfig(const char* submenu_name, int& varable) {
		return *this;
	}

	ScrollOption& addCanSaveToConfig(const char* submenu_name, float& varable) {
		return *this;
	}

	void Render(int position) {
		string _text;
		OnUpdate(this);
		static char nameBuffer[128];
		vaBuff(nameBuffer, 128, "%s ~m~[%i/%i]", pScrollStruct[*pNumber].Name.Get(), *pNumber, nMax);
		bool current = pMenu.IsSelected(position);

		Color textColor = current ? pMenu.HighlightedOptionColor : pMenu.MenuTextColor;

	

		Color color;
		switch (ScrollType) {
		case TOGGLE:
			pRenderer.DrawString(nameBuffer, 0.658f + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.11f) + pMenu.uiPos.y, pRenderer.iTextFont, 0.37f, textColor, false, 2, current ? 0.028f : 0.014f);

			color = *pBool ? Color(130, 214, 157) : Color(200, 55, 80);

			if (pMenu.iToggleStyle == 0) {
				if (*pBool)
					pRenderer.DrawSprite({ "commonmenu", pMenu.IsSelected(position) ? "shop_box_tickb" : "shop_box_tick" }, 0.952f + pMenu.uiPos.x, (((position + 2) * 0.037f + 0.11f) + 0.01425f) + pMenu.uiPos.y, 0.022f, 0.039f, 0, Color(255, 255, 255));
				else
				{
					pRenderer.DrawSprite({ "commonmenu", pMenu.IsSelected(position) ? "shop_box_blankb" : "shop_box_blank" }, 0.952f + pMenu.uiPos.x, (((position + 2) * 0.037f + 0.11f) + 0.01425f) + pMenu.uiPos.y, 0.022f, 0.039f, 0, Color(255, 255, 255));
				}
			}
			else if (pMenu.iToggleStyle == 1) {
				pRenderer.DrawSprite({ "commonmenu", "common_medal" }, 0.952f + pMenu.uiPos.x, (((position + 2) * 0.037f + 0.11f) + 0.01425f) + pMenu.uiPos.y, 0.022f, 0.039f, 0, color);
			}

			if (current)
				pRenderer.DrawSprite({ "commonmenu", "shop_arrows_upanddown" }, 0.937f + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.124f) + pMenu.uiPos.y, 0.023f, 0.037f, 90.f, textColor);

			break;


		case SELECT:
			pRenderer.DrawString(nameBuffer, 0.958f + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.11f) + pMenu.uiPos.y, pRenderer.iTextFont, 0.37f, textColor, false, 2, current ? 0.015f : 0.014f);

			color = *pBool ? Color(130, 214, 157) : Color(200, 55, 80);
			pRenderer.DrawSprite({ "commonmenu", "common_medal" }, 0.952f + pMenu.uiPos.x, (((position + 2) * 0.037f + 0.11f) + 0.01425f) + pMenu.uiPos.y, 0.022f, 0.039f, 0, color);

			if (current)
				pRenderer.DrawSprite({ "commonmenu", "shop_arrows_upanddown" }, 0.937f + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.124f) + pMenu.uiPos.y, 0.023f, 0.037f, 90.f, textColor);

			break;
		case SCROLL:
		case SCROLLSELECT:
			pRenderer.DrawString(nameBuffer, 0.958f + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.11f) + pMenu.uiPos.y, pRenderer.iTextFont, 0.37f, textColor, false, 2, current ? 0.015f : 0.0f);

			if (current)
				pRenderer.DrawSprite({ "commonmenu", "shop_arrows_upanddown" }, 0.951f + pMenu.uiPos.x, (((position + 2) * 0.037f + 0.11f) + 0.01425f) + pMenu.uiPos.y, 0.023f, 0.037f, 90.f, textColor);
			break;
		}

		pRenderer.DrawString(Name.c_str(), 0.742f + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.11f) + pMenu.uiPos.y, pRenderer.iTextFont, 0.37f, textColor);
	}

	void RenderSelected(int position) {
		CurrentOp();
		if (IsOptionPressed() && Requirement()) {
			switch (ScrollType) {
			case TOGGLE: *pBool ^= true; break;
			case SELECT: *pSelectedNumber = *pNumber; break;
			}

			Function();
		}

		if (pMenu.bLeftPress) {
			*pNumber -= 1;
			if (bLoop) {
				if (*pNumber < nMin) *pNumber = nMax;
			}
			else if (*pNumber < nMin && bHasMin) *pNumber = nMin;

			

			if (ScrollType == SCROLL || (ScrollType == TOGGLE && *pBool))
				Function();
		}

		// Scroll right
		if (pMenu.bRightPress) {
			*pNumber += 1;
			if (bLoop) {
				if (*pNumber > nMax) *pNumber = nMin;
			}
			else if (*pNumber > nMax && bHasMax) *pNumber = nMax;

			

			if (ScrollType == SCROLL || (ScrollType == TOGGLE && *pBool))
				Function();
		}

		static char tooltipBuffer[128];
		vaBuff(tooltipBuffer, 128, "~c~[~s~%d/%d~c~] ~s~%s", *pNumber + 1, nMax + 1, Tooltip);
		strcpy(pRenderer.szTooltip, tooltipBuffer);
	}

	void WriteTranslation(json& jsonOb, bool def) {
		
	}

	void ReadTranslation(json& jsonOb) {
		
	}

	void ResetTranslation() {
		
	}
};