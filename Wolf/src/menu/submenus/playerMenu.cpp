#include "stdafx.h"
#include "playerMenu.h"
#include "mainMenu.h"
#include "self/animationMenu.h"
#include "self/wardrobeMenu.h"
using namespace PlayerMenuVars;

namespace PlayerMenuVars {
	using namespace Globals;

	ScrollStruct<float>NoClipSpeeds[]{
		("Normal"), 0.5f,
		("Moderate"), 1.3f,
		("Fast"), 2.5f,
		("Insane"), 3.5f
	};

	Vars vars;

	void NoRagdoll(bool toggle) {
		PED::SetPedCanRagdoll(GetLocalPlayer().m_ped, !toggle);
		PED::SetPedCanRagdollFromPlayerImpact(GetLocalPlayer().m_ped, !toggle);
		PED::SetPedCanBeKnockedOffVehicle(GetLocalPlayer().m_ped, !toggle);
	}
}

void PlayerMenu::Init() {
	setParentSubmenu<MainMenu>();
	setName("Player");


	addOption(SubmenuOption("Animation")
		.addSubmenu<AnimationMenu>()
		.addTooltip("Animation options"));

	addOption(SubmenuOption("Wardrobe")
		.addSubmenu<WardrobeMenu>()
		.addTooltip("Wardrobe options"));

	addOption(ToggleOption("Invincibility")
		.addToggle(vars.bInvincibility)
		.addFunction([] {  
			if (!vars.bInvincibility) {
				ENTITY::SET_ENTITY_PROOFS(GetLocalPlayer().m_ped, false, false, false, false, false, false, false, false);
			}
		})
		.addTooltip("Make yourself invincible"));

	addOption(ToggleOption("Never Wanted")
		.addToggle(vars.bNeverWanted)
		.addFunction([] {
			if (!vars.bNeverWanted) {
				PLAYER::SetMaxWantedLevel(5);
			}
		})
		.addTooltip("No pigs"));

	addOption(ToggleOption("No Ragdoll")
		.addToggle(vars.bNoRagdoll)
		.addFunction([] { NoRagdoll(!vars.bNoRagdoll); })
		.addTooltip("You won't fall over anymore"));

	addOption(ToggleOption("Invisibility")
		.addToggle(vars.bInvisibility)
		.addFunction([] { ENTITY::SET_ENTITY_VISIBLE(GetLocalPlayer().m_ped, true, true); })
		.addTooltip("Become invisible to everyone"));

	addOption(NumberOption<int>(SCROLL, "Opacity")
		.addNumber(vars.iOpacity, "%d", 1).addMin(0).addMax(100).setScrollSpeed(5)
		.addFunction([] { ENTITY::SET_ENTITY_ALPHA(GetLocalPlayer().m_ped, 255 - (vars.iOpacity * 2.55f), false); })
		.addTooltip("Set your players see-through value"));

	addOption(ButtonOption("Suicide")
		.addFunction([] { PED::ApplyDamageToPed(GetLocalPlayer().m_ped, 30000, true); })
		.addTooltip("\"Kill yourself\" - PINK GUY"));

	addOption(ButtonOption("Clone")
		.addFunction([] { PED::ClonePed(GetLocalPlayer().m_ped, 0, 1, 0); })
		.addTooltip("Clone your player using the latest technology from Elon Tusk"));

	addOption(ButtonOption("Health and Armor Regenration")
		.addFunction([] {
			PED::SetPedArmour(GetLocalPlayer().m_ped, 100);
			ENTITY::SET_ENTITY_HEALTH(GetLocalPlayer().m_ped, ENTITY::GET_ENTITY_MAX_HEALTH(GetLocalPlayer().m_ped), 0, 0);
			pRenderer.NotifyBottom("Health and armor regenerated!");
		})
		.addTooltip("Regenerate your health and armor"));

	addOption(ButtonOption("Clean")
		.addFunction([] {
			PED::ClearPedBloodDamage(GetLocalPlayer().m_ped);
			PED::ResetPedVisibleDamage(GetLocalPlayer().m_ped);
		})
		.addTooltip("Clean your player (blood, etc)"));

	addOption(ToggleOption("Superman")
		.addToggle(vars.bSuperman)
		.addTooltip("Fly like superman wooooosh"));

	addOption(ToggleOption("Shrink")
		.addToggle(vars.bShrink)
		.addFunction([] {
			if (!vars.bShrink) PED::SetPedConfigFlag(GetLocalPlayer().m_ped, 223, false);
		})
		.addTooltip("Shrink your character"));

	addOption(ToggleOption("Forcefield")
		.addToggle(vars.bForcefield)
		.addTooltip("Create a forcefield around your player"));

	/*addOption(ToggleOption("Explosive Melee")
		.addToggle(vars.bExplosiveMelee)
		.addTooltip("Stuff explodes when you punch it"));*/

	addOption(ToggleOption("Super Jump")
		.addToggle(vars.bSuperJump)
		.addTooltip("Jump superly"));

	addOption(NumberOption<int>(TOGGLE, "Super Run")
		.addNumber(vars.iSuperRunSpeed, "%d", 1).addMin(0).addMax(100).setScrollSpeed(5)
		.addToggle(vars.bSuperRun)
		.addTooltip("Run superly (hold Shift)"));

	addOption(ToggleOption("Super Swim")
		.addToggle(vars.bSuperSwim)
		.addTooltip("Swim superly"));

	addOption(ScrollOption<float>(TOGGLE, "No Clip")
		.addScroll(vars.iNoclipSpeedSelection, 0, NUMOF(NoClipSpeeds) - 1, NoClipSpeeds)
		.addToggle(vars.bNoClip)
		.addFunction([] { vars.v3NoClipCoords = GetLocalPlayer().m_coordinates; })
		.addTooltip("Allows you to fly round the map (also works inside vehicles)"));

	addOption(ScrollOption<float>(TOGGLE, "Levitation")
		.addScroll(vars.iLevitationSpeedSelection, 0, NUMOF(NoClipSpeeds) - 1, NoClipSpeeds)
		.addToggle(vars.bLevitation)
		.addFunction([] {
			vars.v3LevitationCoords = GetLocalPlayer().m_coordinates;
			if (!vars.bLevitation) {
				ENTITY::DETACH_ENTITY(GetLocalPlayer().m_ped, true, true);
				g_entityControl.SimpleRequestControl(vars.eLevitationEntity);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(vars.eLevitationEntity, true, true);
				ENTITY::DELETE_ENTITY(&vars.eLevitationEntity);
			}
		})
		.addTooltip("Allows you to levitate around the map"));

	addOption(ToggleOption("Breathe Fire")
		.addToggle(vars.bBreatheFire)
		.addFunction([] { if (vars.bBreatheFire) pRenderer.NotifyMapColor("Hold X to breathe fire", 184); })
		.addTooltip("Hold X to breathe fire"));
}

/*Update once when submenu is opened*/
void PlayerMenu::UpdateOnce() {}

/*Update while submenu is active*/
void PlayerMenu::Update() {}

/*Background update*/
void PlayerMenu::FeatureUpdate() {
	if (vars.bInvincibility) {
		//SetEntityInvincible(GetLocalPlayer().Ped, true);
		ENTITY::SET_ENTITY_PROOFS(GetLocalPlayer().m_ped, true, true, true, true, true, true, true, true);
	}
	
	if (vars.bNeverWanted) {
		PLAYER::SetMaxWantedLevel(0);
		PLAYER::ClearPlayerWantedLevel(GetLocalPlayer().m_id);
	}
	
	if (vars.bNoRagdoll) {
		NoRagdoll(true);
	}

	if (vars.bInvisibility) {
		ENTITY::SET_ENTITY_VISIBLE(GetLocalPlayer().m_ped, false, false);
	}

	if (vars.bShrink) {
		PED::SetPedConfigFlag(GetLocalPlayer().m_ped, 223, true);
	}

	if (vars.bForcefield) {
		ENTITY::SET_ENTITY_INVINCIBLE(GetLocalPlayer().m_ped, true);
		FIRE::ADD_EXPLOSION(GetLocalPlayer().m_coordinates.x, GetLocalPlayer().m_coordinates.y, GetLocalPlayer().m_coordinates.z, 29, 100, false, true, 0.0f, false);
	}

	if (vars.bExplosiveMelee) {
		MISC::SetExplosiveMeleeThisFrame(GetLocalPlayer().m_id);
	}

	if (vars.bSuperJump) {
		MISC::SetSuperJumpThisFrame(GetLocalPlayer().m_id);
	}

	if (vars.bSuperRun) {
		static bool stop;
		if (!GetLocalPlayer().m_isInVehicle) {
			if (KeyDown(VK_SHIFT)) {
				ENTITY::APPLY_FORCE_TO_ENTITY(GetLocalPlayer().m_ped, true, 0, vars.iSuperRunSpeed, 0, 0, 0, 0, false, true, true, true, false, true);
				stop = true;
			} else if (stop) {
				ENTITY::SET_ENTITY_COORDS(GetLocalPlayer().m_ped, GetLocalPlayer().m_coordinates.x, GetLocalPlayer().m_coordinates.y, GetLocalPlayer().m_coordinates.z - 1, false, false, false, false);
				//BRAIN::TaskStandStill(GetLocalPlayer().m_ped, 1);
				stop = false;
			}
		}
	}

	if (vars.bSuperSwim) {
		PLAYER::SetSwimMultiplierForPlayer(GetLocalPlayer().m_id, 1.49f);
		PED::SetPedMoveRateOverride(GetLocalPlayer().m_ped, 10.0f);
	}

	if (vars.bSuperman) {
		auto LeftRight = PAD::GetControlValue(0, 188);
		auto UpDown = PAD::GetControlValue(0, 189);

		if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(GetLocalPlayer().m_ped) < 2.1f) {
			WEAPON::GiveWeaponToPed(GetLocalPlayer().m_ped, 0xFBAB5776, -1, true, true);
			ENTITY::SET_ENTITY_COORDS(GetLocalPlayer().m_ped, GetLocalPlayer().m_coordinates.x, GetLocalPlayer().m_coordinates.y, GetLocalPlayer().m_coordinates.z + 65.0f, false, false, false, true);
		} else {
			if (UpDown == 254 || KeyDown(0x53))
				ENTITY::APPLY_FORCE_TO_ENTITY(GetLocalPlayer().m_ped, 1, 0, +3, 10, 0, 0, 0, 1, true, true, true, false, true);//down
			if (UpDown == 0 || KeyDown(0x57))
				ENTITY::APPLY_FORCE_TO_ENTITY(GetLocalPlayer().m_ped, 1, 0, +3, 0, 0, 0, 0, 1, true, true, true, false, true);//up
			if (KeyDown(VK_SHIFT))
				ENTITY::APPLY_FORCE_TO_ENTITY(GetLocalPlayer().m_ped, 1, 0, + 15, .3, 0, 0, 0, 1, true, true, true, false, true);
			if (LeftRight == 254 || KeyDown(0x44))
				ENTITY::APPLY_FORCE_TO_ENTITY(GetLocalPlayer().m_ped, 1, 1.20, 0, 0, 0, 0.10, 0, 1, true, true, true, false, true);
			if (LeftRight == 0 || KeyDown(0x41))
				ENTITY::APPLY_FORCE_TO_ENTITY(GetLocalPlayer().m_ped, 1, -1.20, 0, 0, 0, 0.10, 0, 1, true, true, true, false, true);
		}
	}

	if (vars.bNoClip) {

		if (GetLocalPlayer().m_isInVehicle) {
			g_entityControl.SimpleRequestControl(GetLocalPlayer().m_entity);
		}

		Utils::GetCameraDirection(&vars.v3NoClipCamCoords.x, &vars.v3NoClipCamCoords.y, &vars.v3NoClipCamCoords.z);
		if (KeyDown(0x57) || PAD::IsDisabledControlPressed(0, 0xC5)) {
			vars.v3NoClipCoords = {
				 vars.v3NoClipCoords.x + (vars.v3NoClipCamCoords.x * (NoClipSpeeds[vars.iNoclipSpeedSelection].Result * (KeyDown(VK_SHIFT) ? 2 : 1))),
				 vars.v3NoClipCoords.y + (vars.v3NoClipCamCoords.y * (NoClipSpeeds[vars.iNoclipSpeedSelection].Result * (KeyDown(VK_SHIFT) ? 2 : 1))),
				 vars.v3NoClipCoords.z + (vars.v3NoClipCamCoords.z * (NoClipSpeeds[vars.iNoclipSpeedSelection].Result * (KeyDown(VK_SHIFT) ? 2 : 1)))
			};
		}

		auto rotation = CAM::GET_GAMEPLAY_CAM_ROT(2);
		ENTITY::SET_ENTITY_COORDS(GetLocalPlayer().m_entity, vars.v3NoClipCoords.x, vars.v3NoClipCoords.y, vars.v3NoClipCoords.z, -80.0f, rotation.y, rotation.z, false);
		//BRAIN::ClearPedTasksImmediately(GetLocalPlayer().m_entity);
	}

	if (KeyJustDown(VK_F3)) {
		vars.bLevitation = !vars.bLevitation;
		vars.v3LevitationCoords = GetLocalPlayer().m_coordinates;
		if (!vars.bLevitation) {
			ENTITY::DETACH_ENTITY(GetLocalPlayer().m_ped, true, true);
			g_entityControl.SimpleRequestControl(vars.eLevitationEntity);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(vars.eLevitationEntity, true, true);
			ENTITY::DELETE_ENTITY(&vars.eLevitationEntity);
			pRenderer.NotifyBottom("Quick Toggled Levitation Mode Off");
		} else {
			pRenderer.NotifyBottom("Quick Toggled Levitation Mode On");
		}
	}

	if (vars.bLevitation) {
		if (!GetLocalPlayer().m_isInVehicle) {
			Utils::GetCameraDirection(&vars.v3LevitationCamCoords.x, &vars.v3LevitationCamCoords.y, &vars.v3LevitationCamCoords.z);
			if (KeyDown(0x57) || PAD::IsDisabledControlPressed(0, 0xC5)) {
				vars.v3LevitationCoords = {
					 vars.v3LevitationCoords.x + (vars.v3LevitationCamCoords.x * (NoClipSpeeds[vars.iLevitationSpeedSelection].Result * (KeyDown(VK_SHIFT) ? 2 : 1))),
					 vars.v3LevitationCoords.y + (vars.v3LevitationCamCoords.y * (NoClipSpeeds[vars.iLevitationSpeedSelection].Result * (KeyDown(VK_SHIFT) ? 2 : 1))),
					 vars.v3LevitationCoords.z + (vars.v3LevitationCamCoords.z * (NoClipSpeeds[vars.iLevitationSpeedSelection].Result * (KeyDown(VK_SHIFT) ? 2 : 1)))
				};
			} else if (KeyDown(0x53)) {
				vars.v3LevitationCoords = {
					 vars.v3LevitationCoords.x - (vars.v3LevitationCamCoords.x * (NoClipSpeeds[vars.iLevitationSpeedSelection].Result * (KeyDown(VK_SHIFT) ? 2 : 1))),
					 vars.v3LevitationCoords.y - (vars.v3LevitationCamCoords.y * (NoClipSpeeds[vars.iLevitationSpeedSelection].Result * (KeyDown(VK_SHIFT) ? 2 : 1))),
					 vars.v3LevitationCoords.z - (vars.v3LevitationCamCoords.z * (NoClipSpeeds[vars.iLevitationSpeedSelection].Result * (KeyDown(VK_SHIFT) ? 2 : 1)))
				};
			}

			if (ENTITY::DOES_ENTITY_EXIST(vars.eLevitationEntity)) {
				Vector3 rotation = CAM::GET_GAMEPLAY_CAM_ROT(2);
				NETWORK::NetworkRequestControlOfEntity(vars.eLevitationEntity);
				ENTITY::SET_ENTITY_COORDS(vars.eLevitationEntity, vars.v3LevitationCoords.x, vars.v3LevitationCoords.y, vars.v3LevitationCoords.z, -80.0f, rotation.y, rotation.z, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(GetLocalPlayer().m_ped, vars.eLevitationEntity, 0x00, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, rotation.z, true, false, true, true, 0, false, false);
				g_entityControl.SimpleRequestModel(MISC::GetHashKey("prop_cs_hotdog_01"));
				vars.eLevitationEntity = OBJECT::CreateObject(MISC::GetHashKey("prop_cs_hotdog_01"), GetLocalPlayer().m_coordinates.x, GetLocalPlayer().m_coordinates.y, GetLocalPlayer().m_coordinates.z, true, false, true);
				g_entityControl.SimpleRequestControl(vars.eLevitationEntity);
				ENTITY::SET_ENTITY_VISIBLE(vars.eLevitationEntity, false, false);
			}
		}
	}

	if (vars.bBreatheFire) {
		
	}
}

/*Singleton*/
PlayerMenu* _instance;
PlayerMenu* PlayerMenu::GetInstance() {
	if (_instance == nullptr) {
		_instance = new PlayerMenu();
		_instance->Init();
		pSubmenuHandler.AddSubmenu(_instance);
	}
	return _instance;
}
PlayerMenu::~PlayerMenu() { delete _instance; }