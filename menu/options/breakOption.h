class BreakOption;

static void breakOption_func(BreakOption* b) {}

class BreakOption : public Option {
private:
	void(*OnUpdate)(BreakOption*);
	void(*CurrentOp)();

public:
	BreakOption(const char* name) : Option(name), OnUpdate(breakOption_func), CurrentOp(v_func) {}

	BreakOption& addRequirement(bool(*func)()) {
		Requirement = func;
		return *this;
	}

	BreakOption& addOnUpdate(void(*func)(BreakOption*)) {
		OnUpdate = func;
		return *this;
	}

	BreakOption& addCurrentOp(void(*func)()) {
		CurrentOp = func;
		return *this;
	}

	BreakOption& addTooltip(const char* tooltip) {
		Tooltip = tooltip;
		return *this;
	}

	void Render(int position);
	void RenderSelected(int position);
};
