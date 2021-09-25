class cfgVehicles {
	//ACE Explosives Framework Start
	class ACE_Explosives_Place;
    //Trying to modify Defuse helper obj

    class Items_base_F;
    class ACE_DefuseObject: Items_base_F {
    class ACE_Actions {
        class ACE_Defuse {
                displayName = "Interact";
                condition = "";
                statement = "";
                icon = "a3\characters_f\data\ui\icon_expl_specialist_ca.paa";
                class ACE_Org_Defuse {
                    displayName = "Defuse Vanilla\Ace3";
                    distance = 1;
                    exceptions[] = {"isNotSwimming"};
                    condition = "[_player, _target] call ace_explosives_fnc_canDefuse";
                    statement = "[_player, _target] call ace_explosives_fnc_startDefuse;";
                    icon = "\z\ace\addons\explosives\UI\Defuse_ca.paa";
                };
                class EODS_Survey {
                    displayName = "Survey Explosive";
                    distance = 1;
                    exceptions[] = {"isNotSwimming"};
                    condition = "[_player, _target] call ace_explosives_fnc_canDefuse";
                    statement = QUOTE([ARR_2(_player,_target)] call FUNC(survey););
                    icon = "a3\ui_f\data\map\diary\icons\diarylocatetask_ca.paa";
                };
                class EODS_Defuse_Battery {
                    displayName = "Defuse Powersource";
                    distance = 1;
                    exceptions[] = {"isNotSwimming"};
                    condition = "[_player, _target] call ace_explosives_fnc_canDefuse";
                    statement = "hint 'test'";
                    icon = "a3\weapons_f\data\ui\m_battery_ca.paa";
                };
                class EODS_Defuse_Detonator{
                    displayName = "Defuse Detonator";
                    distance = 1;
                    exceptions[] = {"isNotSwimming"};
                    condition = "[_player, _target] call ace_explosives_fnc_canDefuse";
                    statement = "hint 'test'";
                    icon = "a3\characters_f\data\ui\icon_expl_specialist_ca.paa";
                };
            };
        };
    };


	class EODS_WaterContainer_PP_Place: ACE_Explosives_Place {
		displayName = "Water Container IED PressurePlate";
	    mapSize = 1;
		author = "Christiansen";
		_generalMacro = "EODS_Water_Container_IED";
		scope = 2;
		model = QPATHTOF(meshes\WaterBomb.p3d);
		//vehicleClass = "EODS_ied_class";
		picture = QPATHTOF(data\ied07_menu.paa);
		ACE_offset[] = {0,0,0};
		//This or CfgAmmo?
		class Eventhandlers	{};
        	class HitPoints	{
                class HitIed {
                    armor = 1;
                    material = -1;
                    name = "Bomb";
                    passThrough = 0;
                };
		};
	};

	class EODS_122mm_USSR_IED_RC_Place: ACE_Explosives_Place {
		displayName = "122mm RCIED";
	    mapSize = 1;
		author = "Christiansen";
		scope = 2;
		model = QPATHTOF(meshes\122mm_USSR_IED_d.p3d);
		//vehicleClass = "EODS_ied_class";
		picture = QPATHTOF(data\ied07_menu.paa);
		ACE_offset[] = {0,0,0};
		//This or CfgAmmo?
		class Eventhandlers	{};


	};
    class EODS_Ied_01_PP_Place: ACE_Explosives_Place {
	displayName = "Ied 01 PP";
	mapSize = 1;
	author = "Christiansen";
	scope = 2;
	model = QPATHTOF(meshes\Ied_PP01.p3d);
	//vehicleClass = "EODS_ied_class";
	picture = QPATHTOF(data\ied07_menu.paa);
	ACE_offset[] = {0,0,0};
	//This or CfgAmmo?
	class Eventhandlers	{};


	};
	class EODS_Ied_02_PP_Place: ACE_Explosives_Place {
		displayName = "Ied 02 PP";
	    mapSize = 1;
		author = "Christiansen";
		scope = 2;
		model = QPATHTOF(meshes\Ied_PP02.p3d);
		//vehicleClass = "EODS_ied_class";
		picture = QPATHTOF(data\ied07_menu.paa);
		ACE_offset[] = {0,0,0};
		//This or CfgAmmo?
		class Eventhandlers	{};


	};
};
