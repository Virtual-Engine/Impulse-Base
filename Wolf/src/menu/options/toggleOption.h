#pragma once

class ToggleOption : public Option {
private:
	function<void(ToggleOption*)> OnUpdate;
	function<void()> CurrentOp;
	function<void()> Function;
	bool* pBool;
	bool CanSaveToConfig;
	bool bDisabledOption;
public:

	ToggleOption(const char* name) : Option(name), Function([] {}), OnUpdate([](ToggleOption* option) {}), pBool(nullptr), bDisabledOption(false), CanSaveToConfig(false), CurrentOp([] {}) {}

	ToggleOption& addToggle(void(*func)()) {
		Function = func;
		return *this;
	}

	ToggleOption& addToggle(bool& toggle) {
		pBool = &toggle;
		return *this;
	}

	ToggleOption& addTranslation() {
		return *this;
	}

	ToggleOption& addFunction(function<void()> func) {
		Function = func;
		return *this;
	}

	ToggleOption& addRequirement(function<bool()> func) {
		Requirement = func;
		return *this;
	}

	ToggleOption& addCanSaveToConfig(const char* submenu_name) { //pSubmenuHandler.GetCurrentSubmenu()->Name.Get()

		return *this;
	}

	ToggleOption& addOnUpdate(function<void(ToggleOption*)> update) {
		OnUpdate = update;
		return *this;
	}

	ToggleOption& addOnUpdate(function<void()> update) {
		OnUpdate = [=](ToggleOption* option) {update(); };
		return *this;
	}

	ToggleOption& addCurrentOp(function<void()> func) {
		CurrentOp = func;
		return *this;
	}

	ToggleOption& addTooltip(const char* tooltip) {
		Tooltip = tooltip;
		return *this;
	}

	ToggleOption& addDisabledFlag() {
		bDisabledOption = true;
		return *this;
	}

	void Render(int position);
	void RenderSelected(int position);
};
