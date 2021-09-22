class CfgAmmo {
	class ACE_IEDUrbanBig_Range_Ammo;

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
		class Eventhandlers	{
			init = "_this animate ['Detonator_hide', 1];_this animate ['Battery_hide', 1];";
		};
	};
};