#include "stdafx.h"
#include "menu/submenus/mainMenu.h"
#include "Player.h"
#include "menu/util/playerManager.h"
#include "playerMenu.h"
using namespace PlayerListsMenuVars;

namespace PlayerListsMenuVars {
	Vars vars;

	bool compareDistance(SPlayer& first, SPlayer& second) {
		return first.m_coordinates.Distance(GetLocalPlayer().m_coordinates) < second.m_coordinates.Distance(GetLocalPlayer().m_coordinates);
	}

	bool compareNoCase(SPlayer& first, SPlayer& second) {
		int i = 0;
		string name1 = first.m_name;
		string name2 = second.m_name;
		while ((i < name1.length()) && (i < name2.length())) {
			if (tolower(name1[i]) < tolower(name2[i])) return true;
			if (tolower(name1[i]) > tolower(name2[i])) return false;
			i++;
		}

		return name1.length() < name2.length();
	}
	bool compareMoney(SPlayer& first, SPlayer& second) {
		uint64_t money1 = Global(Globals::PLAYER_BASE).At(first.m_id, Globals::PLAYER_PADDING).At(Globals::PLAYER_OFFSET).At(Globals::PLAYER_OFFSET_TOTAL).As<uint64_t>();
		uint64_t money2 = Global(Globals::PLAYER_BASE).At(second.m_id, Globals::PLAYER_PADDING).At(Globals::PLAYER_OFFSET).At(Globals::PLAYER_OFFSET_TOTAL).As<uint64_t>();
		return (money1 > money2);
	}

	bool compareTag(SPlayer& first, SPlayer& second) {
		int points1 = 0, points2 = 0;
		if (first.m_isHost || first.m_isScriptHost) points1 += 5;
		if (first.m_isFriend) points1 += 4;
		if (first.m_isOTR) points1 += 2;
		if (first.m_isInInt) points1 += 1;
		if (first.m_isGod) points1 += 3;
		if (first.m_id == 33) points1 += 7;
		if (first.m_isLocalPlayer) points1 += 6;

		if (second.m_isHost || second.m_isScriptHost) points2 += 5;
		if (second.m_isFriend) points2 += 4;
		if (second.m_isOTR) points2 += 2;
		if (second.m_isInInt) points2 += 1;
		if (second.m_isGod) points1 += 3;
		if (second.m_id == 33) points2 += 7;
		if (second.m_isLocalPlayer) points2 += 6;

		return (points1 > points2);
	}
	const char* GenerateName(SPlayer& player) {
		static char name[150] = { 0 };
		strcpy(name, "");

		if (player.bIsHost) strcat(name, "~y~[SH]~s~ ");
		if (player.bIsFriend) strcat(name, "~b~[F]~s~ ");
		if (player.bIsInInterior && !player.bIsGodmode) strcat(name, "~g~[INT]~s~ ");
		if (player.bIsGodmode && !player.bIsInInterior) strcat(name, "~r~[GOD]~s~ ");
		if (player.bIsGodmode && player.bIsInInterior) strcat(name, "~g~[INT]~s~ ");
		if (player.m_id == GetLocalPlayer().m_id) strcat(name, "~f~[ME]~s~ ");
		if (player.bIsSessionHost) strcat(name, "~y~[H]~s~ ");

		strcat(name, " ");
		strcat(name, player.m_name);
		return name;
	}
}
inline int opacity = 0;
void PlayerListsMenu::Init() {
	setName("Player");

	addOption(BreakOption("Players"));

	vector<SPlayer> players;
	for (SPlayer& player : players) {
		addOption(SubmenuOption(GenerateName(player))
			.addSubmenu<PlayerMenu>()
			.addFunction([=] { /*NetworkPlayerMenuVars::vars.iPlayer = player.Id; NetworkPlayerMenu::GetInstance()->GetName().SetMapped(player.Name);*/ })
			.addTooltip("Go to player submenu"));
	}

	PlayerListsMenu::GetInstance();
}

void PlayerListsMenu::UpdateOnce() {}

void PlayerListsMenu::Update() {
	static int TIMER;
	static bool update = true;
	Utils::DoTimedFunction(&TIMER, 250, [] {update = true; });

	if (update) {

		Submenu::ClearOptionsOffset(3);

		vector<SPlayer> players;
		for (int i = 0; i < MAXPLAYERS; i++) {
			if (GetPlayer(i).m_exists) {
				players.push_back(GetPlayer(i));
			}
		}

		if (pMenu.iCurrentOption > Options.size())pMenu.ResetCurrentOption();
		update = false;
	}
}

void PlayerListsMenu::FeatureUpdate() {}

/*Singleton*/
PlayerListsMenu* _instance;
PlayerListsMenu* PlayerListsMenu::GetInstance() {
	if (_instance == nullptr) {
		_instance = new PlayerListsMenu();
		_instance->Init();
		pSubmenuHandler.AddSubmenu(_instance);
	}
	return _instance;
}
PlayerListsMenu::~PlayerListsMenu() { delete _instance; }