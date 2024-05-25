#pragma once

class Renderer {
public:
	void Initialize();

	float GetOptionY(int pos);
	void DrawString(const char* text, float x, float y, int font, float scale, Color color, bool outline = false, int justify = -1, float justifyfix = 0.0f);
	void DrawSprite(Texture texture, float x, float y, float w, float h, float heading, Color color, bool renderIfNotStreamed = true);
	void DrawSpriteUnsafe(Texture texture, float x, float y, float w, float h, float heading, Color color);
	void DrawRect(float x, float y, float width, float height, Color color);
	void DrawLine(float x1, float y1, float z1, float x2, float y2, float z2, Color color);
	void DrawTitle(const char* title);

	void Render();
	void RenderHeader();
	void RenderSubHeader();
	void RenderBackground();
	void RenderOptionHighlight();
	void RenderFooter();
	void RenderTooltip(String toRender);
	void RenderGlobe();
	void RenderMouseTooltip(String tooltip);

	float GetStringWidth(const char* str, int font, float fontsize);
	float GetStringHeight(int font, float fontsize);

	void NotifyBottom(const char* textl, int duration = 4000);
	void NotifyMap(const char* pText);
	void NotifyMapColor(const char* pText, int color);

	void DrawInWorldBox(Entity entity, Color color);
	void DrawBox(float x, float y, float width, float height, String title = "", bool gradients = false, Texture texture = { "", "" }, bool customColor = false, Color color = { 255, 255, 255, 255 });

	void Set2DLayer(int layer);
	int Get2DLayer() { return m_2DLayer; }
	int m_2DLayer;
	char szTooltip[256];

	float fWidth;
	float fBgOpacity;
	float fLineWidth;
	float fHeaderHeight;
	float fRenderOptions;
	float fOptionHeight;
	float fSubHeaderHeight;
	float fFooterHeight;
	float fTextSize;
	int iTextFont;
	float fOptionY;
	int iToolTipScaleform;
	float m_subHeaderY;

	Vector2 Position;

	Color TitleColor;
	Color HeaderOutlineColor;
	Color SubHeaderColor;
	Color BackgroundPrimaryColor;
	Color ScrollBarColor;
	Color OptionColor;
	Color m_cPrimary;
	Color m_cOutline;

	Texture m_hDialogBox;

	float m_dialogHeaderHeight;
	float m_dialogFooterHeight;

	template<typename T>
	bool Within(T val, T min, T max) {
		return val <= max && val >= min;
	}

	int Clamp(int val, int min, int max) {
		return val < min ? min : val > max ? max : val;
	}

	float Clamp(float val, float min, float max) {
		return val < min ? min : val > max ? max : val;
	}

	void Clamp(int *val, int min, int max) {
		*val = *val < min ? min : *val > max ? max : *val;
	}

	bool Clamp(float *val, float min, float max) {
		*val = *val < min ? min : *val > max ? max : *val;
		return *val == min || *val == max;
	}
};

extern Renderer pRenderer;