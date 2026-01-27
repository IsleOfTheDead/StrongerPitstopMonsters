class CfgPatches
{
	class StrongerPitstopMonsters_Werewolf
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Data", "DZ_Characters_Zombies", "PITSTOP_Monsters_Werewolf_Base" };
	};
};

class CfgVehicles
{
  class PITSTOP_Monsters_Werewolf_Base
  {
    class DamageSystem
    {
      class GlobalHealth { class Health { /* hitpoints=3375; */ hitpoints=16875; }; };
      class DamageZones
      {
        class Head { class Health { /* hitpoints=1113; */ hitpoints=5565; }; };
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
