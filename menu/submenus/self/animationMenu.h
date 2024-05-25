#pragma once
#include "menu/submenu.h"

class AnimationMenu : public Submenu {
public:
	static AnimationMenu* GetInstance();
	void Init() override;
	void UpdateOnce() override;
	void Update() override;
	void FeatureUpdate() override;

	AnimationMenu() : Submenu() {}
	~AnimationMenu();
};

namespace AnimationMenuVars
{
	struct Vars {
		bool bControllable;
		bool bContort;
		bool bAnimationToggle;
		bool bRun;
		bool bWalkstyleToggle;
		bool bRunWalkstyle;
		bool bScenarioToggle;

		int iAnimation;
		int iFlag;
		int iWalkstyle;
		int iScenario;

		const char* pAnim;
		const char* pDict;
		const char* pWalkstyleAnim;
	};

	extern Vars vars;
}