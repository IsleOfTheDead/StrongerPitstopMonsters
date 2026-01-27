class CfgPatches
{
	class StrongerPitstopMonsters_Clingers
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Data", "DZ_Characters_Zombies", "PITSTOP_Monsters_Clingers" };
	};
};

class CfgVehicles
{
  class PITSTOP_Monsters_Clingers_Base
  {
    class DamageSystem
    {
      class GlobalHealth { class Health { /* hitpoints=3375; */ hitpoints=16875; }; };
      class DamageZones
      {
        class Head { class Health { /* hitpoints=2250; */ hitpoints=11250; }; };
        class Torso { class Health { /* hitpoints=3375; */ hitpoints=16875; }; };
        class LeftArm { class Health { /* hitpoints=3375; */ hitpoints=16875; }; };
        class RightArm { class Health { /* hitpoints=3375; */ hitpoints=16875; }; };
        class LeftLeg { class Health { /* hitpoints=3375; */ hitpoints=16875; }; };
        class RightLeg { class Health { /* hitpoints=3375; */ hitpoints=16875; }; };
        class LeftFoot { class Health { /* hitpoints=3375; */ hitpoints=16875; } ;};
        class RightFoot { class Health { /* hitpoints=3375; */ hitpoints=16875; }; };
      };
    };
  };
};
