class CfgPatches
{
	class StrongerPitstopMonsters_Reaper
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Data", "DZ_Characters_Zombies", "PITSTOP_Monsters_Reaper" };
	};
};

class CfgVehicles
{
  class PITSTOP_Monsters_Reaper_Base
  {
    class DamageSystem
    {
      class GlobalHealth { class Health { /* hitpoints=15000; */ hitpoints=75000; }; };
      class DamageZones
      {
        class Head { class Health { /* hitpoints=12750; */ hitpoints=63750; }; };
        class Torso { class Health { /* hitpoints=15000; */ hitpoints=75000; }; };
        class LeftArm { class Health { /* hitpoints=15000; */ hitpoints=75000; }; };
        class RightArm { class Health { /* hitpoints=15000; */ hitpoints=75000; }; };
        class LeftLeg { class Health { /* hitpoints=15000; */ hitpoints=75000; }; };
        class RightLeg { class Health { /* hitpoints=15000; */ hitpoints=75000; }; };
        class LeftFoot { class Health { /* hitpoints=15000; */ hitpoints=75000; } ;};
        class RightFoot { class Health { /* hitpoints=15000; */ hitpoints=75000; }; };
      };
    };
  };
};
