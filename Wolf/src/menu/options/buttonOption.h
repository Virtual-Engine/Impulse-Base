#pragma once

class ButtonOption;

static void buttonOption_func(ButtonOption* b) {}

class ButtonOption : public Option {
private:
	void(*OnUpdate)(ButtonOption*);
	void(*Function)();
	void(*FunctionWithArg)(DWORD); DWORD pFunctionWithArgArg;
	void(*CurrentOp)();
	function<void()> m_function;
	bool bHasKeyboard;
	bool bIsKeyboardActive;
	void(*KeyboardCallback)(const char*);
	const char* pDefaultKeyboardText;
	int nMaxKeyboardChars;
public:
	ButtonOption(const char* name) : Option(name), bIsKeyboardActive(false), bHasKeyboard(false), Function(v_func), OnUpdate(buttonOption_func), CurrentOp(v_func), FunctionWithArg(vwa_func) {}

	void Input(int position);

	ButtonOption& addFunction(void(*func)()) {
		Function = func;
		return *this;
	}

	ButtonOption& addFunctions(function<void()> func) {
		m_function = func;
		return *this;
	}

	ButtonOption& addFunctionWithArg(void(*func)(DWORD), DWORD arg) {
		FunctionWithArg = func;
		pFunctionWithArgArg = arg;
		return *this;
	}

	ButtonOption& addRequirement(bool(*func)()) {
		Requirement = func;
		return *this;
	}

	ButtonOption& addOnUpdate(void(*func)(ButtonOption*)) {
		OnUpdate = func;
		return *this;
	}

	ButtonOption& addCurrentOp(void(*func)()) {
		CurrentOp = func;
		return *this;
	}

	ButtonOption& addTooltip(const char* tooltip) {
		Tooltip = tooltip;
		return *this;
	}

	ButtonOption& addKeyboard(const char* title, const char* defaultText, int maxChars, void(*function)(const char*)) {
		bHasKeyboard = true;
		KeyboardCallback = function;
		//pGame.pCustomGxtLabel = title;
		nMaxKeyboardChars = maxChars;
		pDefaultKeyboardText = defaultText;
		return *this;
	}

	void Render(int position);
	void RenderSelected(int position);
};