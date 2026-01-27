class CfgPatches
{
	class StrongerPitstopMonsters_Gargoyvile
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Data", "DZ_Characters_Zombies", "PITSTOP_Monsters_Gargoyvile" };
	};
};

class CfgVehicles
{
  class PITSTOP_Monsters_Gargoyvile_Base
  {
    class DamageSystem
    {
      class GlobalHealth { class Health { /* hitpoints=5250; */ hitpoints=26250; }; };
      class DamageZones
      {
        class Head { class Health { /* hitpoints=3750; */ hitpoints=18750; }; };
        class Torso { class Health { /* hitpoints=5250; */ hitpoints=26250; }; };
        class LeftArm { class Health { /* hitpoints=5250; */ hitpoints=26250; }; };
        class RightArm { class Health { /* hitpoints=5250; */ hitpoints=26250; }; };
        class LeftLeg { class Health { /* hitpoints=5250; */ hitpoints=26250; }; };
        class RightLeg { class Health { /* hitpoints=5250; */ hitpoints=26250; }; };
        class LeftFoot { class Health { /* hitpoints=5250; */ hitpoints=26250; } ;};
        class RightFoot { class Health { /* hitpoints=5250; */ hitpoints=26250; }; };
      };
    };
  };
};
