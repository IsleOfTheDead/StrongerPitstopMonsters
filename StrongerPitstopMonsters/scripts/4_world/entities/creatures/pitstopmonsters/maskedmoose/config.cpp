class CfgPatches
{
	class StrongerPitstopMonsters_MaskedMoose
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Data", "DZ_Characters_Zombies", "PITSTOP_Monsters_MaskedMoose" };
	};
};

class CfgVehicles
{
  class PITSTOP_Monsters_MaskedMoose_Base
  {
    class DamageSystem
    {
      class GlobalHealth {
        class Health { /* hitpoints=750; */ hitpoints=3750; };
        class Blood { /* hitpoints=10000; */ hitpoints=50000; };
        class Shock { /* hitpoints=500; */ hitpoints=2500; };
      };
      class DamageZones
      {
        class Zone_Head { class Health { /* hitpoints=5250; */ hitpoints=26250; }; };
        class Zone_Neck { class Health { /* hitpoints=750; */ hitpoints=3750; }; };
        class Zone_Chest { class Health { /* hitpoints=6000; */ hitpoints=30000; }; };
        class Zone_Belly { class Health { /* hitpoints=6000; */ hitpoints=30000; }; };
        class Zone_Spine { class Health { /* hitpoints=6000; */ hitpoints=30000; }; };
        class Zone_Pelvis { class Health { /* hitpoints=6750; */ hitpoints=33750; }; };
        class Zone_Legs { class Health { /* hitpoints=6750; */ hitpoints=33750; }; };
      };
    };
  };
};
