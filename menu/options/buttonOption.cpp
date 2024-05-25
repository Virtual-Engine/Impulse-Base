#include "stdafx.h"


void ButtonOption::Render(int position) {
	OnUpdate(this);
	Color color = pMenu.IsSelected(position) ? pMenu.HighlightedOptionColor : pMenu.MenuTextColor;
	pRenderer.DrawString(Name.c_str(), 0.742f + pMenu.uiPos.x, ((position + 2) * 0.037f + 0.11f) + pMenu.uiPos.y, pRenderer.iTextFont, 0.37f, color);
}

void ButtonOption::RenderSelected(int position) {
	CurrentOp();
	if (IsOptionPressed() && Requirement()) {
		Function();
		m_function();
		FunctionWithArg(pFunctionWithArgArg);

		if (bHasKeyboard) {
			bIsKeyboardActive = true;
			MISC::DisplayOnscreenKeyboard(0, "", "KeyboardDescription", pDefaultKeyboardText, "", "", "", nMaxKeyboardChars);
		}
	}

	if (bIsKeyboardActive) {
		pMenu.DisableMenuInputThisFrame();
		if (MISC::UpdateOnscreenKeyboard() > 1) {
			bIsKeyboardActive = false;
		}
		else {
			if (MISC::UpdateOnscreenKeyboard() == 1) {
				bIsKeyboardActive = false;
				KeyboardCallback(MISC::GetOnscreenKeyboardResult());
			}
		}
	}
}