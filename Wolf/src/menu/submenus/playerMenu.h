#pragma once
#include "menu/submenu.h"

class PlayerMenu : public Submenu {
public:
	static PlayerMenu* GetInstance();
	void Init() override;
	void UpdateOnce() override;
	void Update() override;
	void FeatureUpdate() override;

	PlayerMenu() : Submenu() {}
	~PlayerMenu();
};

namespace PlayerMenuVars
{
	struct Vars {
		bool bInvincibility;
		bool bNeverWanted;
		bool bNoRagdoll;
		bool bInvisibility;
		bool bSuperman;
		bool bShrink;
		bool bForcefield;
		bool bExplosiveMelee;
		bool bSuperJump;
		bool bSuperRun;
		bool bSuperSwim;
		bool bNoClip;
		bool bLevitation;
		bool bBreatheFire;

		int iOpacity;
		int iSuperRunSpeed = 2;
		int iNoclipSpeedSelection;
		int iLevitationSpeedSelection;

		Vector3 v3NoClipCoords;
		Vector3 v3NoClipCamCoords;
		Vector3 v3LevitationCoords;
		Vector3 v3LevitationCamCoords;

		Entity eLevitationEntity;
	};

	extern Vars vars;
}