class CfgMagazines {
    class IEDUrbanBig_Remote_Mag;
	class ATMine_Range_Mag;
    class CA_Magazine;
    //Pressureplate IEDs
	class EODS_WaterContainer_PP_Mag: ATMine_Range_Mag {

            model = QPATHTOF(meshes\WaterBomb.p3d);
			displayName = "WaterContainer IED Pressureplate";
			ACE_Explosives_SetupObject = "EODS_WaterContainer_PP_Place";
			ammo = "EODS_WaterContainer_PP_Ammo";
	        class ACE_Triggers {
				SupportedTriggers[] = {"PressurePlate"};
				class PressurePlate {
					digDistance = 0.05;
					//pitch = 0;
				};
        };
	};
	class EODS_Ied_01_PP_Mag: ATMine_Range_Mag {

            model = QPATHTOF(meshes\Ied_PP01.p3d);
			displayName = "IED01 PP";
			ACE_Explosives_SetupObject = "EODS_Ied_01_PP_Place";
			ammo = "EODS_Ied_01_PP_Ammo";
	        class ACE_Triggers {
				SupportedTriggers[] = {"PressurePlate"};
				class PressurePlate {
					digDistance = 0.05;
					//pitch = 0;
				};
        };
	};
	class EODS_Ied_02_PP_Mag: ATMine_Range_Mag {

            model = QPATHTOF(meshes\Ied_PP02.p3d);
			displayName = "IED02 PP";
			ACE_Explosives_SetupObject = "EODS_Ied_02_PP_Place";
			ammo = "EODS_Ied_02_PP_Ammo";
	        class ACE_Triggers {
				SupportedTriggers[] = {"PressurePlate"};
				class PressurePlate {
					digDistance = 0.1;
					//pitch = 0;
				};
        };
	};





    //Radio Controlled IEDs
    class EODS_122mm_USSR_IED_RC_Mag: IEDUrbanBig_Remote_Mag {
        model = QPATHTOF(meshes\122mm_USSR_IED_d.p3d);
        displayName = "122mm RCIED";
        ammo = "EODS_122mm_USSR_IED_RC_Ammo";
        ACE_Explosives_Placeable = 1;
        useAction = 0;
        ACE_Explosives_SetupObject = "EODS_122mm_USSR_IED_RC_Place";
        ACE_Explosives_DelayTime = 0.5;
        class ACE_Triggers {
            SupportedTriggers[] = {"Cellphone","DeadManSwitch"};
            class Command {
                FuseTime = 0.5;
                ammo = "EODS_122mm_USSR_IED_RC_Ammo";
            };
            class DeadManSwitch: Command {};
            class Cellphone: Command {};
        };
    };
};
