#pragma once

class Submenu;

class SubmenuOption : public Option {
public:
	function<void(SubmenuOption*)> OnUpdate;
	function<void()> CurrentOp;
	function<void()> Function;
	function<float(int)> m_onDraw;

	Submenu* pSubmenu;

	SubmenuOption(const char* name) : Option(name), Function([] {}), OnUpdate([](SubmenuOption* option) {}), pSubmenu(nullptr), CurrentOp([] {}) {}

	template<typename T, typename = enable_if<is_base_of<Submenu, T>::value>>
	SubmenuOption& addSubmenu() {
		pSubmenu = T::GetInstance();
		return *this;
	}

	SubmenuOption& addSubmenu(Submenu* submenu) {
		pSubmenu = submenu;
		return *this;
	}

	SubmenuOption& addFunction(function<void()> func) {
		Function = func;
		return *this;
	}

	SubmenuOption& addRequirement(function<bool()> func) {
		Requirement = func;
		return *this;
	}

	SubmenuOption& addOnUpdate(function<void(SubmenuOption*)> func) {
		OnUpdate = func;
		return *this;
	}

	SubmenuOption& addCurrentOp(function<void()> func) {
		CurrentOp = func;
		return *this;
	}

	SubmenuOption& setVisible(bool visible) {
		bVisible = visible;
		return *this;
	}

	SubmenuOption& addTranslation() {
		
		return *this;
	}
	SubmenuOption& addOnDraw(function<float(int)> func) {
		m_onDraw = func;
		return *this;
	}
	SubmenuOption& addName(const char* name) {
		Name = name;
		return *this;
	}

	SubmenuOption& addTooltip(const char* tooltip) {
		Tooltip = tooltip;
		return *this;
	}

	void Render(int position);
	void RenderSelected(int position);
};