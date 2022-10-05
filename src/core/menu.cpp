class RscPictureKeepAspect;
class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay {
	class Spotlight {
		class CoopCampaign {
			text = "";
			textIsQuote = 0;
			picture = QPATHTOF(ui\intro.paa);
			video = QPATHTOF(ui\rg-intro.ogv);
			action = "";
			actionText = "Taskforce RealityGaming";
			condition = "true";
		};
	};
	class controls {
		class RGLogo: RscPictureKeepAspect {
			idc=1299;
			text=QPATHTOF(ui\rg_logo.paa);
			tooltip="RealityGaming Taskforce";
			onButtonClick="http://www.realitygamer.org";
			x="safezoneX + 1 *     (pixelW * pixelGrid * 2) -  (4 * pixelH)";
			y="safezoneY + safezoneH - (4 *       2 +     1) *    (pixelH * pixelGrid * 2) - 4 *  (4 * pixelH)";
			w="1.28 *             (           ((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.28 *             (           (           ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
class RscTitle;
class RscText;
class RscLine;
class RscButton;
class RscShortcutButton;
class RscActiveText;
class RscFrame;
class RscPicture;
class RscStructuredText;
class RscListBox;
class RscCombo;
class RscListNBox;
class RscControlsGroup;
class RscProgress;
class RscEdit;
class Scrollbar;
class VScrollbar;
class HScrollbar;
class RscButtonMenu;
class RscControlsGroupNoScrollbars;
class RscDisplayLoadMission: RscStandardDisplay
{
	class controls
	{
		class MapBackTop: RscText
		{
			colorBackground[]=
			{
				"217/256",
				"125/256",
				"0/256",
				0.80000001
			};
		};
		class Mission: RscControlsGroupNoScrollbars
		{
			class MissionName: RscText
			{
				colorBackground[]=
				{
					"217/256",
					"125/256",
					"0/256",
					0.89999998
				};
			};
		};
		class RG_logo: RscPicture
		{
			style="48+0x800";
			x="safezoneX + safezoneW * 0.05"; //"safezoneX + safezoneW * 0.25";
			y="safezoneY + safezoneH * 0.70"; //0.11
			w="safezoneW * 0.20"; //"safezoneW * 0.25";
			h="safezoneH * 0.20"; //"safezoneH * 0.25";
			text=QPATHTOF(UI\logo.paa);
		};
	};
};
class RscDisplayNotFreeze: RscStandardDisplay
{
	class controls
	{
		class MapBackTop: RscText
		{
			colorBackground[]=
			{
				"217/256",
				"125/256",
				"0/256",
				0.80000001
			};
		};
		class Mission: RscControlsGroupNoScrollbars
		{
			class MissionName: RscText
			{
				colorBackground[]=
				{
					"217/256",
					"125/256",
					"0/256",
					0.89999998
				};
			};
		};
		class RG_logo: RscPicture
		{
			style="48+0x800";
			x="safezoneX + safezoneW * 0.05";
			y="safezoneY + safezoneH * 0.70";
			w="safezoneW * 0.20";
			h="safezoneH * 0.20";
			text=QPATHTOF(UI\logo.paa);
		};
	};
};
class RscDisplayClient: RscStandardDisplay
{
	class controls
	{
		class MapBackTop: RscText
		{
			colorBackground[]=
			{
				"217/256",
				"125/256",
				"0/256",
				0.80000001
			};
		};
		class Mission: RscControlsGroupNoScrollbars
		{
			class MissionName: RscText
			{
				colorBackground[]=
				{
					"217/256",
					"125/256",
					"0/256",
					0.89999998
				};
			};
		};
		class RG_logo: RscPicture
		{
			style="48+0x800";
			x="safezoneX + safezoneW * 0.05";
			y="safezoneY + safezoneH * 0.70";
			w="safezoneW * 0.20";
			h="safezoneH * 0.20";
			text=QPATHTOF(UI\logo.paa);
		};
	};
};
