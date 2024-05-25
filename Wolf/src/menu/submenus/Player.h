#pragma once
#include "menu/submenu.h"

class PlayerListsMenu : public Submenu
{
public:
	static PlayerListsMenu* GetInstance();

	void Init() override;
	void UpdateOnce() override;
	void Update() override;
	void FeatureUpdate() override;

	PlayerListsMenu() : Submenu() { }
	~PlayerListsMenu();
};

namespace PlayerListsMenuVars
{
	struct Vars {
		int sorttype = 0;
	};
}