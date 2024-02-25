#include "\z\ace\addons\main\script_component.hpp"

// Common utils
#define GETCTRL(IDC) ((GETUVAR(MRB_display,displayNull)) displayCtrl (IDC))

#define MRB_isZeus ((getAssignedCuratorLogic player) in allCurators)

//gives error if left ## isnt included
#define FNC(ID) MRB_fnc##_##ID
#define QFNC(ID) QUOTE(FNC(ID))

#define PRINT_LVL_INFO 0
#define PRINT_LVL_WARNING 1
#define PRINT_LVL_ERROR 2
#define PRINT(TXT,LVL) diag_log formatText ["[mrb_mod] %2: %1", format [TXT, __FILE__, missionName], ["INFO", "WARNING", "ERROR"] select LVL]

// Encapsulate ACE macros
#undef GETVAR
#define GETVAR(var1,var2,var3) (var1 GETVAR_SYS(var2,var3))

#undef GETPRVAR
#define GETPRVAR(var1,var2) GETVAR(profileNamespace,var1,var2)

// Networking
#define SERVER_ONLY if (!isServer) exitWith {PRINT("Non-server call to file %1 in mission %2 - file is marked SERVER_ONLY!",PRINT_LVL_WARNING)}
#define CLIENT_ONLY if (!hasInterface) exitWith {PRINT("Non-client call to file %1 in mission %2 - file is marked CLIENT_ONLY!",PRINT_LVL_WARNING)}
