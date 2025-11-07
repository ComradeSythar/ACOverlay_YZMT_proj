class CfgPatches
{
	class ACOverlay_YZMT
	{
		units[] = {};
		
		requiredVersion = 0.1;
		requiredAddons[] ={"DZ_Scripts","DZ_Data"};
	};
};

class CfgMods
{
	class ACOverlay_YZMT
	{
		dir = "ACOverlay_YZMT";
		name = "Adjustable Color Overlay (YZMT)";
		description = "";
		author = "Comrade Sythar";
		version = "0.01";
		type = "mod";
		dependencies[] = { "Game", "World", "Mission" };

		class defs
		{
			class gameScriptModule
			{
				files[] = { "ACOverlay_YZMT\scripts\3_Game" };
			};
			class worldScriptModule
			{
				files[] = { "ACOverlay_YZMT\scripts\4_World" };
			};
			class missionScriptModule
			{
				files[] = { "ACOverlay_YZMT\scripts\5_Mission" };
			};
		};
	};
};
