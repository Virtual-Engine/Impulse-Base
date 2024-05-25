#include "stdafx.h"

static MenuInput g_menuInput;
char g_name[128];
void MenuInput::Update() {
	if (!pMenu.IsOpen()) return;
	for (auto& func : m_functionQueue) func();
	m_functionQueue.clear();
}

void MenuInput::Setup() {
	GetFiberManager()->GoToMainFiber();
	//GetWindowManager()->DisableAllInputThisFrame();
	//pRenderer.Set2DLayer(7);
}

void MenuInput::GetInput(string& input, InputCombination keys[], int size, int maxLength) {
	static int timer;
	if (KeyDown(17/*LCTRL*/) && KeyJustUp('V')) {
		if (OpenClipboard(Backend::GetWindow()))input = (char*)GetClipboardData(CF_TEXT);
		CloseClipboard();
		return;
	}
	if (KeyJustUp(VK_SPACE)) input += " ";
	if (KeyJustUp(VK_BACK)) timer = 0;
	if (KeyDown(VK_BACK) && input.length() > 0) Utils::DoTimedFunction(&timer, 100, [&] {input.pop_back(); });
	for (int i = 0; i < size; i++) {
		const InputCombination& comb = keys[i];
		if (KeyJustDown(comb.m_input)) input += KeyDown(VK_SHIFT) || KeyDown(VK_CAPITAL) ? comb.m_outputWithCaps : comb.m_output;
	}
	if (input.length() > maxLength) input.pop_back();
}

template bool MenuInput::Number<int>(String name, int*, int, bool, int, bool, String);
template bool MenuInput::Number<float>(String name, float*, float, bool, float, bool, String);
template bool MenuInput::Number<int64_t>(String name, int64_t*, int64_t, bool, int64_t, bool, String);
template bool MenuInput::Number<int32_t>(String name, int32_t*, int32_t, bool, int32_t, bool, String);

//template <typename Type>
//bool MenuInput::Number(String name, Type* output, Type min, bool hasMin, Type max, bool hasMax, String format) {
//	strcpy(g_name, name);
//	const static float x = 0.5f, y = 0.4f, width = 0.2f, height = 0.1f;
//	bool accepted = false;
//	bool exit = false;
//	string input;
//	while (!exit) {
//		Setup();
//		//pRenderer.DrawBox(x, y, width, height, g_name, true, pRenderer.m_hDialogBox);
//		pRenderer.DrawRect(0.5, y + 0.02f, width - 0.04f, 0.03f, { 80, 80, 80, 160 });
//		//pRenderer.DrawString(input.c_str(), x - 0.05, y - 0.02f + 0.02f, FontChaletComprimeCologne2, 0.5f, { 255, 255, 255, 255 }, false, JustifyCenter, x - width / 2, x + width / 2);
//
//		GetInput(input, numberCombinations, NUMOF(numberCombinations), 10);
//
//
//		if (IsAJPressed(true)) {
//			exit = 1;
//			accepted = 1;
//		} else if (KeyJustUp(VK_ESCAPE)) {
//			exit = 1;
//			accepted = 0;
//		}
//	}
//	try {
//		if (accepted && !input.empty()) {
//			Type out = 0;
//
//			if (is_same<Type, int>::value) out = (Type)stoi(input);
//			else if (is_same<Type, float>::value) out = (Type)stof(input);
//			else if (is_same<Type, int64_t>::value) out = (Type)stoll(input);
//			else if (is_same<Type, int32_t>::value) out = (Type)stol(input);
//
//			if (hasMin && out < min) *output = min;
//			else if (hasMax && out > max) *output = max;
//			else *output = out;
//		}
//	} catch (...) {
//		pRenderer.NotifyBottom(strInvalidNumber.Get());
//		return false;
//	}
//	return accepted;
//}

MenuInput* GetMenuInput() { return &g_menuInput; }