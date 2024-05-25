#pragma once
#include "../src/util/translationString.h"
static bool b_req() { return true; }
static void v_func() {}
static void vwa_func(DWORD p) { }

class Option {
protected:
	function<bool()> Requirement;
	string Name;
	string Tooltip;
	bool bIsBreak;
	bool bVisible;
	//byte bHoverTimer;
	uint8_t m_hoverTimer;

public:
	Option() : Name(""), Tooltip(""), Requirement(b_req), bIsBreak(false), bVisible(true)/*, bHoverTimer(0)*/ {}
	Option(string name) : Name(name), Tooltip(""), Requirement(b_req), bIsBreak(false), bVisible(true)/*, bHoverTimer(0)*/ {}

	Option(const char* name, bool isBreak) : Name(""), Tooltip(""), Requirement(b_req), bIsBreak(isBreak), bVisible(true)/*, bHoverTimer(0)*/ {}

	Option(const Option& src) : Name(src.Name), Tooltip(src.Tooltip) {
		*this = src;
	}

	virtual void Render(int position);
	virtual void RenderSelected(int position);

	virtual void SetName(const char* name) {
		Name = name;
	}

	template<typename T>
	bool IsOfType() {
		return dynamic_cast<const T*>(this) != nullptr;
	}

	void SetVisible(bool visible) { bVisible = visible; }

	string& GetName() { return Name; }
	string& GetTooltip() { return Tooltip; }

	bool IsBreak() { return bIsBreak; }
	bool IsVisible() { return bVisible && Requirement(); }
};
