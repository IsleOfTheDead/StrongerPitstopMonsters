class CfgPatches
{
	class StrongerPitstopMonsters_Werebear
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Data", "DZ_Characters_Zombies", "PITSTOP_Monsters_Werebear_Base" };
	};
};

class CfgVehicles
{
  class PITSTOP_Monsters_Werebear_Base
  {
    class DamageSystem
    {
      class GlobalHealth { class Health { /* hitpoints=6375; */ hitpoints=31875; }; };
      class DamageZones
      {
        class Head { class Health { /* hitpoints=2137; */ hitpoints=10685; }; };
        class Torso { class Health { /* hitpoints=6375; */ hitpoints=31875; }; };
        class LeftArm { class Health { /* hitpoints=6375; */ hitpoints=31875; }; };
        class RightArm { class Health { /* hitpoints=6375; */ hitpoints=31875; }; };
        class LeftLeg { class Health { /* hitpoints=6375; */ hitpoints=31875; }; };
        class RightLeg { class Health { /* hitpoints=6375; */ hitpoints=31875; }; };
        class LeftFoot { class Health { /* hitpoints=6375; */ hitpoints=31875; } ;};
        class RightFoot { class Health { /* hitpoints=6375; */ hitpoints=31875; }; };
      };
    };
  };
};
