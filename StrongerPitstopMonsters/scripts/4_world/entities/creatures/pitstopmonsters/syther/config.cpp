class CfgPatches
{
	class StrongerPitstopMonsters_Syther
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Data", "DZ_Characters_Zombies", "PITSTOP_Monsters_Syther" };
	};
};

class CfgVehicles
{
  class PITSTOP_Monsters_Syther_Base
  {
    class DamageSystem
    {
      class GlobalHealth { class Health { /* hitpoints=2625; */ hitpoints=13125; }; };
      class DamageZones
      {
        class Head { class Health { /* hitpoints=2250; */ hitpoints=11250; }; };
        class Torso { class Health { /* hitpoints=2625; */ hitpoints=13125; }; };
        class LeftArm { class Health { /* hitpoints=2625; */ hitpoints=13125; }; };
        class RightArm { class Health { /* hitpoints=2625; */ hitpoints=13125; }; };
        class LeftLeg { class Health { /* hitpoints=2625; */ hitpoints=13125; }; };
        class RightLeg { class Health { /* hitpoints=2625; */ hitpoints=13125; }; };
        class LeftFoot { class Health { /* hitpoints=2625; */ hitpoints=13125; } ;};
        class RightFoot { class Health { /* hitpoints=2625; */ hitpoints=13125; }; };
      };
    };
  };
};
