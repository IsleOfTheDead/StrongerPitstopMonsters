class CfgPatches
{
	class StrongerPitstopMonsters
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Data", "DZ_Characters_Zombies", "pitstop_monsters" };
	};
};

class CfgMods
{
	class StrongerPitstopMonsters
	{
		dir="StrongerPitstopMonsters";
		hideName=0;
		hidePicture=0;
    extra=0;
		name="StrongerPitstopMonsters";
		picture="StrongerPitstopMonsters/data/picture.paa";
    logoSmall="StrongerPitstopMonsters/data/logoSmall.paa";
    logo="StrongerPitstopMonsters/data/logo.paa";
    logoOver="StrongerPitstopMonsters/data/logoOver.paa";
    action="https://steamcommunity.com/sharedfiles/filedetails/?id=";
    credits=["moldypenguins","Inkota"];
		author="Azuryeoth";
		authorID = "76561197970608700";
		version="1.0";
		type="mod";
		dependencies[]={ "World" };
    class defs
    {
      class engineScriptModule { value=""; files[]={ "StrongerPitstopMonsters/scripts/1_core" }; };
      class worldScriptModule { value=""; files[]={ "StrongerPitstopMonsters/scripts/4_world" } }
    }
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
    }
  }
}
