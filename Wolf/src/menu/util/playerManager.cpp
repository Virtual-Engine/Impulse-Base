#include "stdafx.h"

PlayerManager g_playerManager;

void PlayerManager::Update() {
	PROFILER();
	for (int i = 0; i < MAXPLAYERS; i++) {
		SPlayer& player = m_players[i];
		player.Reset();
		player.m_id = i;
		player.m_ped = PLAYER::GetPlayerPedScriptIndex(i);
		player.m_exists = ENTITY::DOES_ENTITY_EXIST(player.m_ped);
		player.m_vehicle = PED::GetVehiclePedIsIn(player.m_ped, false);
		player.m_lastVehicle = PED::GetVehiclePedIsIn(player.m_ped, true);
		player.m_name = PLAYER::GetPlayerName(i);
		player.m_health = ENTITY::GET_ENTITY_HEALTH(player.m_ped);
		player.m_cutscene = NETWORK::IsPlayerInCutscene(player.m_id) || NETWORK::NetworkIsPlayerInMpCutscene(player.m_id);
		player.m_health = ENTITY::GET_ENTITY_HEALTH(player.m_ped);
		// SpriteGTAOPassive = 163
		if (HUD::GetBlipSprite(HUD::GetBlipFromEntity(player.m_ped)) == 163) player.m_passive = true;
		else player.m_passive = false;
		player.m_maxHealth = ENTITY::GET_ENTITY_MAX_HEALTH(player.m_ped);
		player.m_isScriptHost = NETWORK::NetworkGetHostOfScript("Freemode", -1, 0) == i;
		player.m_coordinates = ENTITY::GET_ENTITY_COORDS(player.m_ped, 0);
		player.m_team = PLAYER::GetPlayerTeam(player.m_id);
		player.m_isInVehicle = PED::IsPedInAnyVehicle(player.m_ped, true);
		player.m_heading = ENTITY::GET_ENTITY_HEADING(player.m_ped);
		player.m_entity = PED::IsPedInAnyVehicle(player.m_ped, 0) ? player.m_vehicle : player.m_ped;
		WEAPON::GetCurrentPedWeapon(player.m_ped, &player.m_weaponHash, 1);
		player.m_hasWeaponInHand = (player.m_weaponHash && player.m_weaponHash != 2725352035);
		player.m_isTalking = NETWORK::NetworkIsPlayerTalking(player.m_id);
		if (player.m_hasWeaponInHand) {
			player.m_weaponEntity = WEAPON::GetCurrentPedWeaponEntityIndex(player.m_ped);
		}

		if (NETWORK::NetworkIsSessionActive()) {
			if (!PED::IsPedheadshotValid(player.m_headshotHandle)) {
				if (player.m_headshotHandle != 0) PED::UnregisterPedheadshot(player.m_headshotHandle);
				player.m_headshotHandle = PED::RegisterPedheadshot(player.m_ped);
			}
		}

		

		GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(player.m_coordinates.x, player.m_coordinates.y, player.m_coordinates.z, &player.m_w2s.x, &player.m_w2s.y);
	}
	m_localPlayer = &m_players[PLAYER::PlayerId()];
	m_localPlayer->m_isLocalPlayer = true;
}

PlayerManager* GetPlayerManager() { return &g_playerManager; }

SPlayer& GetPlayer(int index) { return GetPlayerManager()->GetPlayer(index); }
SPlayer& GetLocalPlayer() { return GetPlayerManager()->GetLocalPlayer(); }
SPlayer& GetSelectedPlayer() { return GetPlayerManager()->GetLocalPlayer(); } // GetPlayer(PlayerMenuVars::player);

void PlayerManager::OnlinePlayerCallback(bool overrideExcludes, function<void(SPlayer)> callback) {
	if (Backend::NetworkIsInSession()) {
		for (auto& p : m_players) {
			if (p.m_exists) {
				//if (!overrideExcludes && ExcludesMenuVars::IsExcluded(p)) continue;
				//callback(p);
			}
		}
	}
}

void OnlinePlayerCallback(bool overrideExcludes, function<void(SPlayer)> callback) { GetPlayerManager()->OnlinePlayerCallback(overrideExcludes, callback); }