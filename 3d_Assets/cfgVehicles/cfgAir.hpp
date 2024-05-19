class USAF_MQ9;
class MRB_MQ9 : USAF_MQ9
{
  displayname = "MQ-9 Reaper";
  faction = "B_3d_Marine_Raider";
  editorSubcategory = "B_3d_Marine_Raider_Aircraft";
  scope = 2;
  side = 1;
  scopeCurator = 2;
  scopeArsenal = 2;
    class EventHandlers 
    {
      init = "_veh = (_this select 0); createVehicleCrew _veh;";
    };
  };
class Heli_Transport_01_base_F;
class vtx_H60_base: Heli_Transport_01_base_F
{
  class AnimationSources;
};
class vtx_MH60M: vtx_H60_base 
{
  class AnimationSources: AnimationSources
{
    class GAU21_L_Hide;
    class GAU21_R_Hide;
    class fuelProbe_show;
    class ERFS_Show;
    class CabinSeats_Hide;
  };
};
class MRB_MH60M : vtx_MH60M
{
  displayName = "MRB_MH-60M";
  faction = "B_3d_Marine_Raider";
  editorSubcategory = "B_3d_Marine_Raider_Aircraft";
  scope = 2;
  side = 1;
  scopeCurator = 2;
  scopeArsenal = 2;
  class AnimationSources : AnimationSources
  {
    class GAU21_L_Hide: GAU21_L_Hide
    {
    source = "user"
    initphase = 1;
    animPeriod = 1;
    };
    class GAU21_R_Hide: GAU21_R_Hide
    {
    source = "user"
    initphase = 1;
    animPeriod = 1;
    };
    class FuelProbe_show : FuelProbe_show
    {
    source = "user"
    initphase = 0;
    animPeriod = 1;
    };
    class ERFS_Show : ERFS_Show
    {
    source = "user"
    initphase = 0;
    animPeriod = 1;
    };
    class CabinSeats_Hide: CabinSeats_Hide
    {
    initPhase=1;
    };
  };
};
class vtx_MH60M_DAP: vtx_H60_base 
{
  class AnimationSources: AnimationSources
  {
    class GAU21_L_Hide;
    class GAU21_R_Hide;
    class fuelProbe_show;
    class ERFS_Show;
    class CabinSeats_Hide;
  };
};
class MRB_MH60M_DAP : vtx_MH60M_DAP
{
  displayName = "MRB_MH-60M_DAP";
  faction = "B_3d_Marine_Raider";
  editorSubcategory = "B_3d_Marine_Raider_Aircraft";
  scope = 2;
  side = 1;
  scopeCurator = 2;
  scopeArsenal = 2;
  class AnimationSources : AnimationSources
  {
    class GAU21_L_Hide: GAU21_L_Hide
    {
    source = "user"
    initphase = 1;
    animPeriod = 1;
    };
    class GAU21_R_Hide: GAU21_R_Hide
    {
    source = "user"
    initphase = 1;
    animPeriod = 1;
    };
    class FuelProbe_show : FuelProbe_show
    {
    source = "user"
    initphase = 0;
    animPeriod = 1;
    };
    class ERFS_Show : ERFS_Show
    {
    source = "user"
    initphase = 0;
    animPeriod = 1;
    };
  };
};
class vtx_MH60M_DAP_MLASS: vtx_H60_base 
{
  class AnimationSources: AnimationSources
  {
    class GAU21_L_Hide;
    class GAU21_R_Hide;
    class fuelProbe_show;
    class ERFS_Show;
    class CabinSeats_Hide;
    };
  };
class MRB_MH60M_MLASS : vtx_MH60M_DAP_MLASS
{
  displayName = "MRB_MH-60M_MLASS";
  faction = "B_3d_Marine_Raider";
  editorSubcategory = "B_3d_Marine_Raider_Aircraft";
  scope = 2;
  side = 1;
  scopeCurator = 2;
  scopeArsenal = 2;
  class AnimationSources : AnimationSources
  {
    class GAU21_L_Hide: GAU21_L_Hide
    {
    source = "user"
    initphase = 1;
    animPeriod = 1;
    };
    class GAU21_R_Hide: GAU21_R_Hide
    {
    source = "user"
    initphase = 1;
    animPeriod = 1;
    };
    class FuelProbe_show : FuelProbe_show
    {
    source = "user"
    initphase = 0;
    animPeriod = 1;
    };
    class ERFS_Show : ERFS_Show
    {
    source = "user"
    initphase = 0;
    animPeriod = 1;
    };
  };
};
/*class Helicopter_Base_H; 
class Heli_Transport_01_base_F : Helicopter_Base_H {};
class B_Heli_Transport_01_F : Heli_Transport_01_base_F {};
class RHS_MELB_base : Helicopter_Base_H 
{
usePreciseGetInAction = 0;
preciseGetInOut = 0;
showCrewAim = 0;
drivercaneject = 1;
allowTabLock = 1;
getInRadius = 3;
ace_cargo_space = 2;
ace_refuel_fuelCapacity = 320;
fuelCapacity = 320;
class TransportMagazines 
{
class _xx_B_IR_Grenade 
{
count = 5;
magazine = "B_IR_Grenade";
};
class _xx_SmokeShellGreen 
{
count = 5;
magazine = "SmokeShellGreen";
};
class _xx_Chemlight_green 
{
count = 5;
magazine = "Chemlight_green";
};
class _xx_ACE_HandFlare_Green 
{
count = 5;
magazine = "ACE_HandFlare_Green";
};
};
class TransportItems 
{
class _xx_FirstAidKit 
{
count = 10;
name = "FirstAidKit";
};
class _xx_toolKit 
{
name = "ToolKit";
count = 1;
};
class _xx_ACRE_PRC152 
{
name = "ACRE_PRC152";
count = 2;
};
};
};

class kyo_MH47E_Heli_base : Helicopter_Base_H {};
class kyo_MH47E_base : kyo_MH47E_Heli_base 
{
delete rhs_hasNoRadar;
};
class MH47E_Razor1 : kyo_MH47E_base 
{
faction = "B_3d_Marine_Raider";
editorSubcategory = "B_3d_Marine_Raider_Aircraft";
scope = 0;
crew = "160th_Detachment_RWA";
typicalCargo[] = {"160th_Detachment_RWA"};
drivercaneject = 1;
scopeCurator = 2;
scopeArsenal = 2;
class AcreIntercoms
{
class Intercom_1                             // Each entry defines a network
{
displayName = "Crew intercom";             // Name of the intercom network displayed to the players
shortName = "Crew";                        // Short name of the intercom network. Maximum of 5 characters
// Seats with stations configured that have intercom access. In this case, units in commander, driver, gunner and turret (excluding FFV) have access to this intercom
// If left empty it has the same effect
allowedPositions[] = {"crew"};
// In this case the commander turret does not have access to crew intercom (unit is "turned out"). This can be useful for historical vehicles
disabledPositions[] = {{"Turret", {0,0}}};
// Despite not having regular access to the network, units in cargo positions can have limited connections to communicate with the crew. These positions do not transmit automatically in the limited network; units in this position must toggle the functionality manually.
limitedPositions[] = {{"cargo", "all"}};
// This is the number of simultaneous connections that units defined in the previous array can have
numLimitedPositions = 1;
// Seats with master stations have the possibility of broadcasting a message in that network
masterPositions[] = {"commander"};
// The intercom initial configuration is enabled upon entering a vehicle
connectedByDefault = 1;
};
class Intercom_2: Intercom_1
{
displayName = "Cargo intercom";
shortName = "Cargo";
// Both crew and cargo positions have access to passenger intercom
allowedPositions[] = {"crew", {"cargo", "all"}};
limitedPositions[] = {};
numLimitedPositions = 0;
// The intercom initial configuration is disabled upon entering a vehicle
connectedByDefault = 0;
};
};
class TransportWeapons 
{
class _xx_rhs_weap_m4_carryhandle 
{
count = 0;
weapon = "rhs_weap_m4_carryhandle";
};
};
class TransportBackpacks 
{
class _xx_B_Parachute 
{
count = 0;
backpack = "B_Parachute";
};
};
class TransportMagazines 
{
class _xx_B_IR_Grenade 
{
count = 5;
magazine = "B_IR_Grenade";
};
class _xx_SmokeShellGreen 
{
count = 5;
magazine = "SmokeShellGreen";
};
class _xx_Chemlight_green 
{
count = 5;
magazine = "Chemlight_green";
};
class _xx_ACE_HandFlare_Green 
{
count = 5;
magazine = "ACE_HandFlare_Green";
};
};
class TransportItems 
{
class _xx_FirstAidKit 
{
count = 4;
name = "FirstAidKit";
};
class _xx_toolKit 
{
name = "ToolKit";
count = 2;
};
class _xx_ACRE_PRC152 
{
name = "ACRE_PRC152";
count = 4;
};
};
class EventHandlers 
{
Init = "(_this select 0) setVariable ['cTab_groupId','Razor',true];_equip = 'MH60L_Refuel_Probe' createVehicle position (_this select 0);_equip attachto [(_this select 0),[-0.1, 0.00, -3.65]];";
};
};
class kyo_MH47E_Ramp : kyo_MH47E_base {};
class MH47E_Razor2 : kyo_MH47E_Ramp 
{
faction = "B_3d_Marine_Raider";
editorSubcategory = "B_3d_Marine_Raider_Aircraft";
scope = 0;
crew = "160th_Detachment_RWA";
typicalCargo[] = {"160th_Detachment_RWA"};
drivercaneject = 1;
scopeCurator = 2;
scopeArsenal = 2;
class AcreIntercoms
{
class Intercom_1                             // Each entry defines a network
{
displayName = "Crew intercom";             // Name of the intercom network displayed to the players
shortName = "Crew";                        // Short name of the intercom network. Maximum of 5 characters
// Seats with stations configured that have intercom access. In this case, units in commander, driver, gunner and turret (excluding FFV) have access to this intercom
// If left empty it has the same effect
allowedPositions[] = {"crew"};
// In this case the commander turret does not have access to crew intercom (unit is "turned out"). This can be useful for historical vehicles
disabledPositions[] = {{"Turret", {0,0}}};
// Despite not having regular access to the network, units in cargo positions can have limited connections to communicate with the crew. These positions do not transmit automatically in the limited network; units in this position must toggle the functionality manually.
limitedPositions[] = {{"cargo", "all"}};
// This is the number of simultaneous connections that units defined in the previous array can have
numLimitedPositions = 1;
// Seats with master stations have the possibility of broadcasting a message in that network
masterPositions[] = {"commander"};
// The intercom initial configuration is enabled upon entering a vehicle
connectedByDefault = 1;
};
class Intercom_2: Intercom_1
{
displayName = "Cargo intercom";
shortName = "Cargo";
// Both crew and cargo positions have access to passenger intercom
allowedPositions[] = {"crew", {"cargo", "all"}};
limitedPositions[] = {};
numLimitedPositions = 0;
// The intercom initial configuration is disabled upon entering a vehicle
connectedByDefault = 0;
};
};
class TransportWeapons 
{
class _xx_rhs_weap_m4_carryhandle 
{
count = 0;
weapon = "rhs_weap_m4_carryhandle";
};
};
class TransportBackpacks 
{
class _xx_B_Parachute 
{
count = 0;
backpack = "B_Parachute";
};
};
class TransportMagazines 
{
class _xx_B_IR_Grenade 
{
count = 5;
magazine = "B_IR_Grenade";
};
class _xx_SmokeShellGreen 
{
count = 5;
magazine = "SmokeShellGreen";
};			
class _xx_Chemlight_green 
{
count = 5;
magazine = "Chemlight_green";
};			
class _xx_ACE_HandFlare_Green 
{
count = 5;
magazine = "ACE_HandFlare_Green";
};
};		
class TransportItems 
{
class _xx_FirstAidKit 
{
count = 4;
name = "FirstAidKit";
};
class _xx_toolKit 
{
name = "ToolKit";
count = 2;
};			
class _xx_ACRE_PRC152 
{
name = "ACRE_PRC152";
count = 4;
};
};
class EventHandlers 
{
Init = "(_this select 0) setVariable ['cTab_groupId','Razor',true];_equip = 'MH60L_Refuel_Probe' createVehicle position (_this select 0);_equip attachto [(_this select 0),[-0.1, 0.00, -3.65]];";
};
};
class kyo_MH47E_HC : kyo_MH47E_base {};
class MH47E_Razor3 : kyo_MH47E_HC 
{
faction = "B_3d_Marine_Raider";
editorSubcategory = "B_3d_Marine_Raider_Aircraft";
scope = 0;
crew = "160th_Detachment_RWA";
typicalCargo[] = {"160th_Detachment_RWA"};
drivercaneject = 1;
scopeCurator = 2;
scopeArsenal = 2;
class TransportWeapons 
{
class _xx_rhs_weap_m4_carryhandle 
{
count = 0;
weapon = "rhs_weap_m4_carryhandle";
};
};
class TransportBackpacks 
{
class _xx_B_Parachute 
{
count = 40;
backpack = "B_Parachute";
};
};
class TransportMagazines 
{
class _xx_MS_Strobe_Mag_1
{
count = 10;
magazine = "MS_Strobe_Mag_1";
};
class _xx_SmokeShellGreen 
{
count = 5;
magazine = "SmokeShellGreen";
};			
class _xx_Chemlight_green 
{
count = 5;
magazine = "Chemlight_green";
};			
class _xx_ACE_HandFlare_Green 
{
count = 5;
magazine = "ACE_HandFlare_Green";
};
};		
class TransportItems 
{
class _xx_FirstAidKit 
{
count = 4;
name = "FirstAidKit";
};
class _xx_ACE_Rope36
{
name = "ACE_rope36";
count = 40;
};			
class _xx_ACRE_PRC152 
{
name = "ACRE_PRC152";
count = 10;
};
};			
class EventHandlers 
{
Init = "(_this select 0) setVariable ['cTab_groupId','Razor',true];_equip = 'MH60L_Refuel_Probe' createVehicle position (_this select 0);_equip attachto [(_this select 0),[-0.1, 0.00, -3.65]];";
};
};
class ej_UH60M_base : Heli_Transport_01_base_F 
{
cargoDoors[] = {"DoorLB","DoorLB","DoorLB","DoorLB","DoorRB","DoorRB","DoorRB","DoorRB"};
};
class ej_MH60M : ej_UH60M_base 
{	
faction = "B_3d_Marine_Raider";
editorSubcategory = "B_3d_Marine_Raider_Aircraft";
delete rhs_hasNoRadar;
};
class MRB_MH60M : ej_MH60M 
{
displayName = "MH-60L - Super";
scope = 0;
side = 1;
scopeCurator = 2;
scopeArsenal = 2;
faction = "B_3d_Marine_Raider";
editorSubcategory = "B_3d_Marine_Raider_Aircraft";
crew = "160th_Detachment_RWA";
typicalCargo[] = {"160th_Detachment_RWA"};
fuelCapacity = 750;
ace_refuel_fuelCapacity = 750;
class TransportWeapons 
{
class _xx_rhs_weap_m4_carryhandle 
{
count = 0;
weapon = "rhs_weap_m4_carryhandle";
};
};
class TransportBackpacks 
{
class _xx_B_Parachute 
{
count = 0;
backpack = "B_Parachute";
};
};
class TransportMagazines 
{
class _xx_B_IR_Grenade 
{
count = 5;
magazine = "B_IR_Grenade";
};
class _xx_SmokeShellGreen 
{
count = 5;
magazine = "SmokeShellGreen";
};
class _xx_Chemlight_green 
{
count = 5;
magazine = "Chemlight_green";
};
class _xx_ACE_HandFlare_Green 
{
count = 5;
magazine = "ACE_HandFlare_Green";
};
};
class TransportItems 
{
class _xx_FirstAidKit 
{
count = 10;
name = "FirstAidKit";
};
class _xx_toolKit 
{
name = "ToolKit";
count = 2;
};
class _xx_ACRE_PRC152 
{
name = "ACRE_PRC152";
count = 4;
};
};
class EventHandlers 
{
Init = "(_this select 0) setVariable ['cTab_groupId','Super',true];_equip = 'MH60L_Refuel_Probe' createVehicle position (_this select 0);_equip attachto [(_this select 0),[0, 0, -2.51]];";
};
};

class ej_MH60MDAP4 : ej_MH60M {
faction = "B_3d_Marine_Raider";
editorSubcategory = "B_3d_Marine_Raider_Aircraft";
scope = 0;
};

class ej_MH60MDAP8H : ej_MH60M {
faction = "B_3d_Marine_Raider";
editorSubcategory = "B_3d_Marine_Raider_Aircraft";
scope = 0;
};

class ej_MH60MDAP16H : ej_MH60M {
faction = "B_3d_Marine_Raider";
editorSubcategory = "B_3d_Marine_Raider_Aircraft";
scope = 0;
};
