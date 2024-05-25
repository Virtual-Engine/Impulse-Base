#include "stdafx.h"

vector<TranslationString*> TranslationString::TranslationTable;

void TranslationString::Register() {
	TranslationTable.push_back(this);
	bHasTranslation = true;
}