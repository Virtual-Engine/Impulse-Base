#include "stdafx.h"
#include "menu/submenus/mainMenu.h"
#include "menu/submenus/playerMenu.h"
#include "Player.h"
using namespace MainMenuVars;

namespace MainMenuVars {
	
}
int opacity = 0;
void MainMenu::Init() {
	setName("Home");

	addOption(SubmenuOption("Self")
		.addSubmenu<PlayerMenu>());

	addOption(SubmenuOption("Player")
		.addSubmenu<PlayerListsMenu>());

	addOption(SubmenuOption("Vehicle")
		.addSubmenu<PlayerMenu>());

	addOption(SubmenuOption("Weapon")
		.addSubmenu<PlayerMenu>());

	addOption(SubmenuOption("Network")
		.addSubmenu<PlayerMenu>());

	addOption(SubmenuOption("Misc")
		.addSubmenu<PlayerMenu>());

	addOption(SubmenuOption("Protection")
		.addSubmenu<PlayerMenu>());

	addOption(SubmenuOption("Recovery")
		.addSubmenu<PlayerMenu>());

	addOption(SubmenuOption("Settings")
		.addSubmenu<PlayerMenu>()
	);
}

void MainMenu::UpdateOnce() {}

void MainMenu::Update() {}

void MainMenu::FeatureUpdate() {}

/*Singleton*/
MainMenu* _instance;
MainMenu* MainMenu::GetInstance() {
	if (_instance == nullptr) {
		_instance = new MainMenu();
		_instance->Init();
		pSubmenuHandler.AddSubmenu(_instance);
	}
	return _instance;
}
MainMenu::~MainMenu() { delete _instance; }