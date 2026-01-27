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
    action="https://steamcommunity.com/sharedfiles/filedetails/?id=3655231347";
    credits=["moldypenguins","Inkota"];
		author="Azuryeoth";
		authorID = "76561197970608700";
		version="1.0";
		type="mod";
		dependencies[]={ "World" };
    class defs
    {
      class engineScriptModule { value=""; files[]={ "StrongerPitstopMonsters/scripts/1_core" }; };
      class worldScriptModule { value=""; files[]={ "StrongerPitstopMonsters/scripts/4_world" }; };
    }
	};
};
