class CfgPatches
{
	class StrongerPitstopMonsters_Yeti
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Data", "DZ_Characters_Zombies", "PITSTOP_Monsters_Yeti_Base" };
	};
};

class CfgVehicles
{
  class PITSTOP_Monsters_Yeti_Base
  {
    class DamageSystem
    {
      class GlobalHealth { class Health { /* hitpoints=1500; */ hitpoints=6000; }; };
      class DamageZones
      {
        class Head { class Health { /* hitpoints=600; */ hitpoints=2400; }; };
        class Torso { class Health { /* hitpoints=3000; */ hitpoints=12000; }; };
        class LeftArm { class Health { /* hitpoints=3000; */ hitpoints=12000; }; };
        class RightArm { class Health { /* hitpoints=3000; */ hitpoints=12000; }; };
        class LeftLeg { class Health { /* hitpoints=1350; */ hitpoints=5400; }; };
        class RightLeg { class Health { /* hitpoints=1350; */ hitpoints=5400; }; };
        class LeftFoot { class Health { /* hitpoints=1350; */ hitpoints=5400; } ;};
        class RightFoot { class Health { /* hitpoints=1350; */ hitpoints=5400; }; };
      };
    };
  };
};
