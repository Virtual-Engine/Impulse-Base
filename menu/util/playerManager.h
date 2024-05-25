#pragma once
//#include "stdafx.h"
//#include "menu\submenus\main\sessionMenu.h"
//#include "menu\submenus\main\sessionMenu.h"

class SPlayer {
public:
	String m_name;
	Player m_id;
	Ped m_ped;
	Vehicle m_vehicle;
	Vehicle m_lastVehicle;
	int m_entity;
	int m_weaponEntity;
	Hash m_weaponHash;
	//int m_handle[13];
	int m_headshotHandle;

	int m_health;
	int m_maxHealth;
	int m_team;
	bool m_passive;
	bool m_paused;
	bool m_typing;
	bool m_joining;
	bool m_modding;
	bool m_isOTR;
	bool m_exists;
	bool m_isHost;
	bool m_isScriptHost;
	bool m_isInInt;
	bool m_isGod;
	bool m_isFriend;
	bool m_isMenuUser;
	bool m_isInVehicle;
	bool m_isLocalPlayer;
	bool m_hasWeaponInHand;
	bool m_isTalking;
	bool m_rstardev;
	bool m_cutscene;

	Vector3 m_coordinates;
	Vector2 m_w2s;
	float m_heading;

	//Player vars!
	bool m_karma;
	bool m_rainWeapons;
	bool m_giveMoneyGun;
	bool m_giveOptionGun;
	bool m_soundrape;
	bool m_particles;
	bool m_setwaypoint;

	bool m_explode;
	bool m_waterLoop;
	bool m_fireLoop;
	bool m_onFire;
	int m_onFireHandle;
	bool m_hostileTraffic;
	bool m_hostilePeds;
	bool m_rainRockets;
	bool m_demiGodmode;
	bool m_bulletgodmode;
	bool m_cameraShake;
	bool m_freezeVehicle;
	bool m_forcefield;
	bool m_isEvolveUserHidden;
	bool m_isEvolveUser;
	bool m_isEvolveStaff;
	bool m_isEvolveVIP;
	bool m_isEvolveUserBlock;
	Vector3 m_attachmentToMeClientPosition;
	Vector3 m_attachmentToMeClientRotation;
	float m_attachmentToMeClientPrecision = 10.0f;
	bool m_attachmentToMeClientAttachedTo;
	Vector3 m_attachmentMeToClientVehiclePosition;
	Vector3 m_attachmentMeToClientVehicleRotation;
	float m_attachmentMeToClientVehiclePrecision = 10.0f;
	bool m_attachmentMeToClientVehicleAttachedTo;
	int m_attachmentMyVehicleToTheirVehicleAttachmentType;
	float m_attachmentMyVehicleToTheirVehicleRelativeDistance;
	int m_attachmentTheirVehicleToMyVehicleAttachmentType;
	float m_attachmentTheirVehicleToMyVehicleRelativeDistance;
	bool m_disableTasks;
	bool m_smokePlayer;
	bool m_electrocute;
	bool m_trapplayer;
	bool m_alwaysWanted;
	bool m_fakeMoney;
	bool m_standardMoneyDrop;
	bool m_standardCircleDrop;
	bool m_standardPedDrop;
	bool m_enableDrop;
	int m_dropAmount = 2500;
	int m_dropType;
	int m_dropModel;
	float m_dropHeight = 2.0;
	float m_dropRadius = 0.5;
	int m_dropDelay = 300;
	bool m_nameESP;
	bool m_boxESP;
	bool m_lineESP;
	bool m_lineLOSESP;
	bool m_headMarkerESP;
	bool m_footMarkerESP;
	bool m_infoESP;
	bool m_bonesESP;
	bool m_skylineESP;

	bool m_chatCommand;
	bool m_chatCommandMoneyDrop;
	bool m_chatCommandSpawnVehicle;
	bool m_chatCommandSpawnPed;
	bool m_chatCommandSpawnObject;
	bool m_chatCommandSpawnBodyguard;
	bool m_chatCommandGiveWeapons;
	bool m_chatCommandExplodeSession;
	bool m_chatCommandVehicleRepair;
	bool m_chatCommandVehicleBoost;
	bool m_chatCommandVehicleJump;
	bool m_chatCommandVehicleUpgrade;
	//
	bool m_chatCommandWeatherDay;
	bool m_chatCommandWeatherNight;
	bool m_chatCommandWeatherSnow;
	bool m_chatCommandWeatherClear;
	bool m_chatCommandWeatherHalloween;
	//
	bool m_chatCommandGlobalsCopsturnblind;
	bool m_chatCommandGlobalsOfftheradar;

	//Vehicle
	bool m_hornBoost;
	bool m_kickLoop;

	//Remote
	bool m_otr;
	bool m_neverWanted;
	bool m_facecamera;
	bool m_blindEye;
	bool m_bribeauthorities;
	bool m_soundSpam;
	bool m_displaySpectatingMessage;
	bool m_transactionSpam;
	bool m_badsport;
	bool m_removebadsport;
	bool m_wantedlevelloop;

	bool bExists;
	bool bIsHost;
	bool bOTR;
	bool bIsInInterior;
	bool bIsGodmode;
	bool bIsFriend;
	bool bIsInVehicle;
	bool bHasWeaponInHand;
	bool bIsTalking;
	bool bIsShooting;
	bool bIsDead;
	bool bIsSessionHost;
	bool bConnected;
	bool bIsCheater;;
	bool bKickInProgress;

	void Reset() {
		m_id = 0;
		m_ped = -1;
		m_entity = -1;
		m_weaponEntity = -1;
		m_weaponHash = -1;
		m_name = "";
		m_exists = false;
		m_isScriptHost = false;
		m_isTalking = false;
		m_isMenuUser = false;
		m_hasWeaponInHand = false;
		m_isLocalPlayer = false;
	}

	void resetPlayerVars() {}

	void setVisible(bool visible) { ENTITY::SET_ENTITY_VISIBLE(m_ped, visible, visible); }
	void setInvincible(bool invincible) { ENTITY::SET_ENTITY_INVINCIBLE(m_ped, invincible); };
	void setProfInvin(bool profinv) { ENTITY::SET_ENTITY_PROOFS(m_ped, profinv, profinv, profinv, profinv, profinv, 0, 0, profinv); };
};

class PlayerManager {
private:
	SPlayer m_players[33];
	SPlayer* m_localPlayer;
public:

	PlayerManager() : m_localPlayer(&m_players[0]) {}
	void Update();
	inline SPlayer& GetPlayer(int index) { return  m_players[index]; }
	inline SPlayer* GetAllPlayers() { return m_players; }
	inline SPlayer& GetLocalPlayer() { return *m_localPlayer; }

	void OnlinePlayerCallback(bool overrideExcludes, function<void(SPlayer)> callback);
};

PlayerManager* GetPlayerManager();

SPlayer& GetPlayer(int index);
SPlayer& GetLocalPlayer();
SPlayer& GetSelectedPlayer();
void OnlinePlayerCallback(bool overrideExcludes, function<void(SPlayer)> callback);

extern PlayerManager g_playerManager;