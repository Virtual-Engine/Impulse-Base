#pragma once

class Scaleform
{
private:
	int m_offset;
	bool m_prepared;
	int m_scaleForm;
public:
	void PrepareInstructionalButtons();
	void DrawInstructional(String text, String button);
	void FinishInstructionalButtons();
};

Scaleform* GetScaleform();