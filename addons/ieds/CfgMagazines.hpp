class CfgMagazines {
	class ATMine_Range_Mag;
	class EODS_WaterContainer_PP_Mag: ATMine_Range_Mag {
			model = QPATHTOF(meshes\WaterBomb.p3d);
			displayName = "WaterContainer IED Pressureplate";
			ACE_Explosives_SetupObject = "EODS_WaterContainer_PP_Place";
			ammo = "EODS_WaterContainer_PP_Ammo";
	        class ACE_Triggers {
				SupportedTriggers[] = {"PressurePlate"};
				class PressurePlate {
					digDistance = 0;
					//pitch = 0;
				};
        };
	};
};
