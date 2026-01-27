class CfgPatches
{
	class StrongerPitstopMonsters_Wendigo
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Data", "DZ_Characters_Zombies", "PITSTOP_Monsters_Wendigo" };
	};
};

class CfgVehicles
{
  class PITSTOP_Monsters_Wendigo_Base
  {
    class DamageSystem
    {
      class GlobalHealth { class Health { /* hitpoints=4125; */ hitpoints=20625; }; };
      class DamageZones
      {
        class Head { class Health { /* hitpoints=1361; */ hitpoints=6805; }; };
        class Torso { class Health { /* hitpoints=4125; */ hitpoints=20625; }; };
        class LeftArm { class Health { /* hitpoints=4125; */ hitpoints=20625; }; };
        class RightArm { class Health { /* hitpoints=4125; */ hitpoints=20625; }; };
        class LeftLeg { class Health { /* hitpoints=4125; */ hitpoints=20625; }; };
        class RightLeg { class Health { /* hitpoints=4125; */ hitpoints=20625; }; };
        class LeftFoot { class Health { /* hitpoints=4125; */ hitpoints=20625; } ;};
        class RightFoot { class Health { /* hitpoints=4125; */ hitpoints=20625; }; };
      };
    };
  };
};
