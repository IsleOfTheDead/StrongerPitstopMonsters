class CfgPatches
{
	class StrongerPitstopMonsters_Gorgund
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Data", "DZ_Characters_Zombies", "PITSTOP_Monsters_Gorgund" };
	};
};

class CfgVehicles
{
  class PITSTOP_Monsters_Gorgund_Base
  {
    class DamageSystem
    {
      class GlobalHealth { class Health { /* hitpoints=6000; */ hitpoints=30000; }; };
      class DamageZones
      {
        class Head { class Health { /* hitpoints=4500; */ hitpoints=22500; }; };
        class Torso { class Health { /* hitpoints=6000; */ hitpoints=30000; }; };
        class LeftArm { class Health { /* hitpoints=6000; */ hitpoints=30000; }; };
        class RightArm { class Health { /* hitpoints=6000; */ hitpoints=30000; }; };
        class LeftLeg { class Health { /* hitpoints=6000; */ hitpoints=30000; }; };
        class RightLeg { class Health { /* hitpoints=6000; */ hitpoints=30000; }; };
        class LeftFoot { class Health { /* hitpoints=6000; */ hitpoints=30000; } ;};
        class RightFoot { class Health { /* hitpoints=6000; */ hitpoints=30000; }; };
      };
    };
  };
};
