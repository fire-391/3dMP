class RscCombo;
class RscActiveText;
class RscControlsGroup;


class RscBackgroundLogo: RscPictureKeepAspect
{
	text="\3d_Functions\data\logoMRB.paa";
	x="0.33375 * safezoneW";
	y="0.29 * safezoneH";
	w="0.3325 * safezoneW";
	h="0.39375 * safezoneH";
};
class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		class LoadingStart: RscControlsGroup
		{
			class controls
			{
				class Logo: RscPictureKeepAspect
				{
					text="\3d_Functions\data\logoMRB.paa";
					x="0.33375 * safezoneW";
					y="0.29 * safezoneH";
					w="0.3325 * safezoneW";
					h="0.39375 * safezoneH";
					onLoad="";
				};
			};
		};
	};
};
class RscDisplayNotFreeze: RscStandardDisplay
{
	class controls
	{
		class LoadingStart: RscControlsGroup
		{
			class controls
			{
				class Logo: RscPictureKeepAspect
				{
					text="\3d_Functions\data\logoMRB.paa";
					x="0.33375 * safezoneW";
					y="0.29 * safezoneH";
					w="0.3325 * safezoneW";
					h="0.39375 * safezoneH";
					onLoad="";
				};
			};
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	class controls
	{
		class LoadingStart: RscControlsGroup
		{
			class controls
			{
				class Logo: RscPictureKeepAspect
				{
					text="\3d_Functions\data\logoMRB.paa";
					x="0.33375 * safezoneW";
					y="0.29 * safezoneH";
					w="0.3325 * safezoneW";
					h="0.39375 * safezoneH";
					onLoad="";
				};
			};
		};
	};
};
class CfgMods
{
	class Mod_Base;
	class MRB: Mod_Base
	{
		picture="\3d_Functions\data\logoMRB.paa";
		logo="\3d_Functions\data\logoMRB.paa";
		logoOver="\3d_Functions\data\logoMRB.paa";
		logoSmall="\3d_Functions\data\logoMRB.paa";
		tooltip="3d Marine Raider Battalion";
		tooltipOwned="S-4 Logistics";
		action="";
		fieldManualTopicAndHint[]={};
		dlcColor[]={0.34999999,0.34999999,0.1,1};
		overview="3d Marine Raider Battalion";
		hideName=1;
		hidePicture=0;
		name="3d Marine Raider Battalion";
		author="S-4 Logistics";
		overviewPicture="\3d_Functions\data\logoMRB.paa";
		overviewText="3d Marine Raider Battalion";
		contentBrowserPicture="\3d_Functions\data\logoMRB.paa";
		popupMsgPicture="\3d_Functions\data\logoMRB.paa";
		popupMsgText="3d Marine Raider Battalion";
		vehPrevMsgText="3d Marine Raider Battalion";
		vehPrevNotifText="3d Marine Raider Battalion";
		itemPrevNotifText="3d Marine Raider Battalion";
		dronePrevNotifText="3d Marine Raider Battalion";
		weaponPrevMsgText="3d Marine Raider Battalion";
		infoPages[]=
		{
			"\3d_Functions\data\logoMRB.paa"
		};
		overviewFootnote="3d Marine Raider Battalion";
	};
};
