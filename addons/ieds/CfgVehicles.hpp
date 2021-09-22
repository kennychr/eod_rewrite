class cfgVehicles {
	
	//ACE Explosives Framework Start
	class ACE_Explosives_Place;
	



	

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
		class Eventhandlers	{
			init = "_this animate ['Detonator_hide', 1];_this animate ['Battery_hide', 1];";
		};

	};

	//ACE Explosives Framework End
};