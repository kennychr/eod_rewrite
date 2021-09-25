class CfgAmmo {
    class PipeBombBase;
	class ACE_IEDUrbanBig_Range_Ammo;
//PressurePlates
	class EODS_WaterContainer_PP_Ammo: ACE_IEDUrbanBig_Range_Ammo {
		model = QPATHTOF(meshes\WaterBomb.p3d);
		simulation = "shotMine";
		triggerWhenDestroyed = 1;  // (Optional) Explode when the object is shot and destroyed (after being placed) (0-disabled, 1-enabled).
        ACE_explodeOnDefuse = 0.02;  // (Optional) Add a chance for the explosive to detonate after being disarmed (in percent)
        ACE_explosives_defuseObjectPosition[] = {0, 0, 0.12};  // (Optional) The position relative to the model where the defuse helper object will be attached and thus the interaction point will be rendered
        ACE_explosives_size = 0;  // (Optional) Setting to 1 will use a defusal action with a larger radius (useful for large mines or mines with a wide pressure plane trigger area)
		ace_explosives_magazine = "EODS_WaterContainer_PP_Mag";
		defaultMagazine = "EODS_WaterContainer_PP_Mag";
		ACE_damageType = "explosive";
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1", 0.8, 1, 40};
		//Fragmentation
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 1000;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 1000;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2440;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 3/5;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        //EODS Info
        GVAR(detonatorType) = "PressurePlate";//Remote or PressurePlate
        GVAR(powerSourceType) = "Internal";//Internal or External
        GVAR(stability) = "Stable";//Stable or Unstable
		class Eventhandlers	{
			init = "hint 'test'";
		};
	};
	class EODS_Ied_01_PP_Ammo: ACE_IEDUrbanBig_Range_Ammo {
		model = QPATHTOF(meshes\Ied_PP01.p3d);
		simulation = "shotMine";

		triggerWhenDestroyed = 1;  // (Optional) Explode when the object is shot and destroyed (after being placed) (0-disabled, 1-enabled).
        ACE_explodeOnDefuse = 0.02;  // (Optional) Add a chance for the explosive to detonate after being disarmed (in percent)
        ACE_explosives_defuseObjectPosition[] = {0, 0, 0.12};  // (Optional) The position relative to the model where the defuse helper object will be attached and thus the interaction point will be rendered
        ACE_explosives_size = 0;  // (Optional) Setting to 1 will use a defusal action with a larger radius (useful for large mines or mines with a wide pressure plane trigger area)
		ace_explosives_magazine = "EODS_Ied_01_PP_Mag";
		defaultMagazine = "EODS_Ied_01_PP_Mag";
		ACE_damageType = "explosive";
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1", 0.8, 1, 40};
		//Fragmentation
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 1000;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 1000;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2440;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 3/5;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        //EODS Info
        GVAR(detonatorType) = "PressurePlate";//Remote or PressurePlate
        GVAR(powerSourceType) = "Internal";//Internal or External
        GVAR(stability) = "Stable";//Stable or Unstable
		class Eventhandlers	{
			init = "hint 'test'";
		};
	};
	class EODS_Ied_02_PP_Ammo: ACE_IEDUrbanBig_Range_Ammo {
		model = QPATHTOF(meshes\Ied_PP02.p3d);
		simulation = "shotMine";

		triggerWhenDestroyed = 1;  // (Optional) Explode when the object is shot and destroyed (after being placed) (0-disabled, 1-enabled).
        ACE_explodeOnDefuse = 0.02;  // (Optional) Add a chance for the explosive to detonate after being disarmed (in percent)
        ACE_explosives_defuseObjectPosition[] = {0, 0, 0.12};  // (Optional) The position relative to the model where the defuse helper object will be attached and thus the interaction point will be rendered
        ACE_explosives_size = 0;  // (Optional) Setting to 1 will use a defusal action with a larger radius (useful for large mines or mines with a wide pressure plane trigger area)
		ace_explosives_magazine = "EODS_Ied_02_PP_Mag";
		defaultMagazine = "EODS_Ied_02_PP_Mag";
		ACE_damageType = "explosive";
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1", 0.8, 1, 40};
		//Fragmentation
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 1000;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 1000;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2440;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 3/5;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        //EODS Info
        GVAR(detonatorType) = "PressurePlate";//Remote or PressurePlate
        GVAR(powerSourceType) = "Internal";//Internal or External
        GVAR(stability) = "Stable";//Stable or Unstable
		class Eventhandlers	{
			init = "hint 'test'";
		};
	};
 //Radio controlled
	class EODS_122mm_USSR_IED_RC_Ammo: PipeBombBase {
		model = QPATHTOF(meshes\122mm_USSR_IED.p3d);


		triggerWhenDestroyed = 1;  // (Optional) Explode when the object is shot and destroyed (after being placed) (0-disabled, 1-enabled).
        ACE_explodeOnDefuse = 0.02;  // (Optional) Add a chance for the explosive to detonate after being disarmed (in percent)
        ACE_explosives_defuseObjectPosition[] = {0, 0, 0.12};  // (Optional) The position relative to the model where the defuse helper object will be attached and thus the interaction point will be rendered
        ACE_explosives_size = 0;  // (Optional) Setting to 1 will use a defusal action with a larger radius (useful for large mines or mines with a wide pressure plane trigger area)
		ace_explosives_magazine = "EODS_122mm_USSR_IED_RC_Mag";
		defaultMagazine = "EODS_122mm_USSR_IED_RC_Mag";
		ACE_damageType = "explosive";
        soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Large_Urban_Placement_01",3.16228,1,20};
        soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\Ied_Large_Urban_Deactivate_01",3.16228,1,20};
        soundEngine[] = {"",0,1};
        soundFakeFall[] = {"soundFall",1};
        soundFall[] = {"",1,1};
        soundFly[] = {"",0,1};
        soundHit[] = {"",100,1};
        soundHit1[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_IED_bigBomb_01",3.16228,1,2000};
        soundHit2[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_IED_bigBomb_02",3.16228,1,2000};
        soundImpact[] = {"",1,1};
        SoundSetExplosion[] = {"BigIED_Exp_SoundSet","BigIED_Tail_SoundSet","Explosion_Debris_SoundSet"};
		//Fragmentation
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 1000;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 1000;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2440;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 3/5;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        //EODS Info
        GVAR(detonatorType) = "Remote";//Remote or PressurePlate
        GVAR(powerSourceType) = "Internal";//Internal or External
        GVAR(stability) = "Stable";//Stable or Unstable
	};
};
