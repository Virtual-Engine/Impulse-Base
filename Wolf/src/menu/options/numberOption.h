#pragma once

template <typename Type>
class NumberOption : public Option {
private:
	function<void(NumberOption*)> OnUpdate;
	function<void()> CurrentOp;
	function<void()> Function;

	ScrollOptionType ScrollType;
	const char* Format;
	Type* pNumber;
	bool* pBool;
	Type Step;
	Type Min;
	Type Max;

	shared_ptr<int> SelectedNumberStorage;
	int* pSelectedNumber;

	DWORD64 dwScrollSpeed;
	bool bHasMin;
	bool bHasMax;
	bool bLoop;

public:
	NumberOption(ScrollOptionType type, const char* name) : Option(name), ScrollType(type), bHasMin(false), bHasMax(false), bLoop(false), dwScrollSpeed(100), Function([] {}), OnUpdate([](NumberOption* option) {}), CurrentOp([] {}) {}

	NumberOption& addToggle(bool& toggle) {
		pBool = &toggle;
		return *this;
	}

	NumberOption& addNumber(Type& number, const char* format, Type step) {
		if (ScrollType == SELECT) {
			SelectedNumberStorage = make_shared<int>(0);
			pSelectedNumber = SelectedNumberStorage.get();
		}

		pNumber = &number;
		Format = format;
		Step = step;
		return *this;
	}

	NumberOption& addSelectedNumber(int& selectedNumber) {
		pSelectedNumber = &selectedNumber;
		return *this;
	}

	NumberOption& addMin(Type min) {
		Min = min;
		bHasMin = true;
		return *this;
	}

	NumberOption& addMax(Type max) {
		Max = max;
		bHasMax = true;
		return *this;
	}

	NumberOption& addRequirement(function<bool()> func) {
		Requirement = func;
		return *this;
	}

	NumberOption& addFunction(function<void()> func) {
		Function = func;
		return *this;
	}

	NumberOption& addOnUpdate(function<void()> update) {
		OnUpdate = [=](NumberOption* option) { update(); };
		return *this;
	}

	NumberOption& addOnUpdate(function<void(NumberOption* option)> update) {
		OnUpdate = update;
		return *this;
	}

	NumberOption& addCurrentOp(function<void()> func) {
		CurrentOp = func;
		return *this;
	}

	NumberOption& addTranslation() {
		return *this;
	}

	NumberOption& setScrollSpeed(int speed) {
		dwScrollSpeed = speed;
		return *this;
	}

	NumberOption& addTooltip(const char* tooltip) {
		Tooltip = (tooltip);
		return *this;
	}

	NumberOption& canLoop() {
		bLoop = true;
		return *this;
	}

	void Render(int position);
	void RenderSelected(int position);
};
