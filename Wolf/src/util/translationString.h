#pragma once

class TranslationString {
private:
	char szOriginal[300];
	char szMapped[300];
	bool bHasTranslation;

public:
	static vector<TranslationString*> TranslationTable;

	TranslationString(const char* original, bool hasTranslation = false, bool reg = false) {
		Set(original);
		bHasTranslation = hasTranslation;
		if (reg) Register();
	}

	TranslationString(const TranslationString& src) {
		*this = src;
	}

	void Register();
	const char* GetOriginal() { return szOriginal; }
	const char* Get() { return bHasTranslation ? szMapped : szOriginal; }
	void SetHasTranslation(bool has) { bHasTranslation = has; }
	bool HasTranslation() { return bHasTranslation; }
	void SetMapped(const char* s) { 
		strcpy(szMapped, s);
	}
	void Reset() { SetMapped(szOriginal); }

	void Set(const char* original) {
		if (!IsBadReadPtr(original, sizeof(original))) {
			strcpy(szOriginal, original);
			SetMapped(original);
		}
	}
};