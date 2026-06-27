// ============================================================================
//  T1W_SAW_Patch
//  Config-only patch for Tier One Weapons MK48 and MK46.
//  Author : Shnaz
//
//  Dependencies: RHS USAF + Tier One Weapons (+ tsp_tier1_sawfix if in use)
//
//  WHAT THIS DOES:
//    1. Reduced recoil   - MK48 has ten selectable presets; MK46 has one (95%).
//                          Change the #define lines in the SETTINGS section.
//    2. Open-bolt fix    - Both guns are wrongly flagged as closed-bolt in T1W,
//                          meaning ACE3 can cook off a round from barrel heat
//                          alone. Real MGs fire from an open bolt so the round
//                          is only chambered at the moment of firing. This sets
//                          ace_overheating_closedBolt = 0 on every variant,
//                          correcting cook-off to jam-only. Inert without ACE.
//
//  HOW IT WORKS:
//    Each weapon variant is re-declared with its REAL parent (": Parent") so
//    it fully inherits the original weapon and only the listed properties
//    change. Never omit the parent - a bare "class X { ... }" with no parent
//    replaces the weapon with a near-empty class and removes it from the
//    arsenal.
//
//  IMPORTANT - #define rules:
//    Never put an inline // comment on a #define line. Arma's preprocessor
//    absorbs everything after // into the macro value and breaks it.
// ============================================================================

class CfgPatches
{
    class T1W_Mk48_RecoilReduction
    {
        author        = "Shnaz";
        units[]       = {};
        weapons[]     = {};
        magazines[]   = {};
        ammo[]        = {};
        // Must load after T1W and tsp_tier1_sawfix so both guns are fully
        // defined before we modify them. These are verified CfgPatches class
        // names (confirmed via configSourceAddonList on both weapons).
        requiredAddons[] = {"Tier1_Weapons_cfg", "tsp_tier1_sawfix"};
        requiredVersion  = 0.1;
    };
};

// ============================================================================
//  MK48 RECOIL PRESETS
//
//  The percentage in each class name scales muzzleOuter, muzzleInner,
//  permanent and temporary as that fraction of the MK48's stock recoil
//  class (recoil_mmg_01). kickBack is FIXED across all MK48 presets at
//  the 60% value so shoulder shove stays constant while muzzle climb and
//  spread change with the preset.
//
//  Stock recoil_mmg_01 (MK48 base):
//      muzzleOuter[] = {0.12, 1.5, 0.8, 0.3}
//      muzzleInner[] = {0, 0, 0.1, 0.1}
//      kickBack[]    = {0.028, 0.112}
//      permanent = 0.04 / temporary = 0.012
//
//  Field guide:
//      muzzleOuter[x, y, a, b]
//          y = main muzzle climb (most noticeable; tune this first)
//          a = horizontal spread, b = vertical spread
//      muzzleInner = inner random-spread cone (adds organic "life" to the kick)
//      kickBack[min, max] = backward shove into the shoulder
//      permanent = climb you must drag back down
//      temporary = shake that settles on its own
//
//  To add a new preset: copy any block, rename the class, and adjust values.
//  To scale uniformly: multiply every value by your desired fraction (e.g.
//  x0.75 for 75% of stock).
// ============================================================================
class CfgRecoils
{
    // ---- 90% of stock ------------------------------------------------------
    class T1W_Mk48_recoil_90
    {
        muzzleOuter[] = {0.108, 1.35, 0.72, 0.27};
        muzzleInner[] = {0, 0, 0.09, 0.09};
        kickBack[]    = {0.0168, 0.0672};
        permanent     = 0.036;
        temporary     = 0.0108;
    };

    // ---- 80% of stock ------------------------------------------------------
    class T1W_Mk48_recoil_80
    {
        muzzleOuter[] = {0.096, 1.20, 0.64, 0.24};
        muzzleInner[] = {0, 0, 0.08, 0.08};
        kickBack[]    = {0.0168, 0.0672};
        permanent     = 0.032;
        temporary     = 0.0096;
    };

    // ---- 70% of stock ------------------------------------------------------
    class T1W_Mk48_recoil_70
    {
        muzzleOuter[] = {0.084, 1.05, 0.56, 0.21};
        muzzleInner[] = {0, 0, 0.07, 0.07};
        kickBack[]    = {0.0168, 0.0672};
        permanent     = 0.028;
        temporary     = 0.0084;
    };

    // ---- 60% of stock ------------------------------------------------------
    class T1W_Mk48_recoil_60
    {
        muzzleOuter[] = {0.072, 0.90, 0.48, 0.18};
        muzzleInner[] = {0, 0, 0.06, 0.06};
        kickBack[]    = {0.0168, 0.0672};
        permanent     = 0.024;
        temporary     = 0.0072;
    };

    // ---- 50% of stock ------------------------------------------------------
    class T1W_Mk48_recoil_50
    {
        muzzleOuter[] = {0.060, 0.75, 0.40, 0.15};
        muzzleInner[] = {0, 0, 0.05, 0.05};
        kickBack[]    = {0.0168, 0.0672};
        permanent     = 0.020;
        temporary     = 0.0060;
    };

    // ---- 40% of stock ------------------------------------------------------
    class T1W_Mk48_recoil_40
    {
        muzzleOuter[] = {0.048, 0.60, 0.32, 0.12};
        muzzleInner[] = {0, 0, 0.04, 0.04};
        kickBack[]    = {0.0168, 0.0672};
        permanent     = 0.016;
        temporary     = 0.0048;
    };

    // ---- Custom: 70% outer + 80% inner + 60% kick --------------------------
    class T1W_Mk48_recoil_custom
    {
        muzzleOuter[] = {0.084, 1.05, 0.56, 0.21};   // 70%
        muzzleInner[] = {0, 0, 0.08, 0.08};           // 80%
        kickBack[]    = {0.0168, 0.0672};              // 60%
        permanent     = 0.028;                         // matched to outer (70%)
        temporary     = 0.0084;
    };

    // ---- Custom: 90% outer + 80% inner + 60% kick  [DEFAULT] --------------
    class T1W_Mk48_recoil_custom_o90i80
    {
        muzzleOuter[] = {0.108, 1.35, 0.72, 0.27};   // 90%
        muzzleInner[] = {0, 0, 0.08, 0.08};           // 80%
        kickBack[]    = {0.0168, 0.0672};              // 60%
        permanent     = 0.036;                         // matched to outer (90%)
        temporary     = 0.0108;
    };

    // ---- Custom: 90% outer + 90% inner + 60% kick --------------------------
    class T1W_Mk48_recoil_custom_o90i90
    {
        muzzleOuter[] = {0.108, 1.35, 0.72, 0.27};   // 90%
        muzzleInner[] = {0, 0, 0.09, 0.09};           // 90%
        kickBack[]    = {0.0168, 0.0672};              // 60%
        permanent     = 0.036;
        temporary     = 0.0108;
    };

    // ---- Custom: 80% outer + 90% inner + 60% kick --------------------------
    class T1W_Mk48_recoil_custom_o80i90
    {
        muzzleOuter[] = {0.096, 1.20, 0.64, 0.24};   // 80%
        muzzleInner[] = {0, 0, 0.09, 0.09};           // 90%
        kickBack[]    = {0.0168, 0.0672};              // 60%
        permanent     = 0.032;                         // matched to outer (80%)
        temporary     = 0.0096;
    };

    // ========================================================================
    //  MK46 RECOIL PRESET
    //
    //  The MK46 uses a different stock recoil class than the MK48
    //  (rhs_recoil_m249 vs recoil_mmg_01) so it has its own preset.
    //
    //  Stock rhs_recoil_m249 (MK46 base):
    //      muzzleOuter[] = {0.2, 0.6, 0.25, 0.1}
    //      muzzleInner[] = {0, 0, 0.1, 0.1}
    //      kickBack[]    = {0.005, 0.02}
    //      permanent = 0.06 / temporary = 0.02
    //
    //  Values below are 95% of stock (x0.95).
    // ========================================================================
    class T1W_Mk46_recoil_95
    {
        muzzleOuter[] = {0.19, 0.57, 0.2375, 0.095};
        muzzleInner[] = {0, 0, 0.095, 0.095};
        kickBack[]    = {0.00475, 0.019};
        permanent     = 0.057;
        temporary     = 0.019;
    };
};

// ============================================================================
//  SETTINGS  -  edit only the #define lines below, then repack
// ============================================================================

//  MK48 recoil preset. Options:
//      "T1W_Mk48_recoil_90"            90% of stock (closest to factory)
//      "T1W_Mk48_recoil_80"            80%
//      "T1W_Mk48_recoil_70"            70%
//      "T1W_Mk48_recoil_60"            60%
//      "T1W_Mk48_recoil_50"            50%
//      "T1W_Mk48_recoil_40"            40% (softest)
//      "T1W_Mk48_recoil_custom"        70% outer / 80% inner
//      "T1W_Mk48_recoil_custom_o90i80" 90% outer / 80% inner  <- default
//      "T1W_Mk48_recoil_custom_o90i90" 90% outer / 90% inner
//      "T1W_Mk48_recoil_custom_o80i90" 80% outer / 90% inner
//  All MK48 presets share the same fixed kickBack (60% of stock).
#define MK48_RECOIL     "T1W_Mk48_recoil_80"

//  MK48 bolt type (ACE3 only; inert without ACE, adds no dependency).
//      0 = open bolt: correct for an MG; cook-off only on a jam, not from heat.
//      1 = closed bolt: cooks off from sustained barrel heat (like a rifle).
#define MK48_CLOSEDBOLT 0

//  MK46 recoil preset. Only one preset is defined (95% of stock).
//  To add more presets, copy the T1W_Mk46_recoil_95 block above, rename it,
//  adjust the values, and change this line to match the new class name.
#define MK46_RECOIL     "T1W_Mk46_recoil_95"

//  MK46 bolt type. Same behaviour as MK48_CLOSEDBOLT above.
#define MK46_CLOSEDBOLT 0

// ============================================================================
//  WEAPON CLASS OVERRIDES
//
//  Inheritance chains (confirmed via configSourceAddonList / inheritsFrom):
//    MK48: Tier1_SAW_Base > Tier1_MK48_Mod0 > Mod0_Desert / Mod0_Para
//          Mod0_Para > Mod0_Para_Desert
//          Mod0 > Mod1 > Mod1_Desert
//    MK46: Tier1_SAW_Base > Tier1_MK46_Mod0 > Mod0_Desert / Mod0_Para
//          Mod0 > Mod0_Para_Desert
//          Mod0 > Mod1 > Mod1_Desert / Mod1_Savit > Mod1_Savit_Desert
// ============================================================================
class CfgWeapons
{
    class Tier1_SAW_Base;   // forward-declare so parent links resolve

    // ---- MK48 variants -----------------------------------------------------
    class Tier1_MK48_Mod0 : Tier1_SAW_Base
    {
        recoil = MK48_RECOIL;
        recoilProne = MK48_RECOIL;
        ace_overheating_closedBolt = MK48_CLOSEDBOLT;
    };
    class Tier1_MK48_Mod0_Desert : Tier1_MK48_Mod0
    {
        recoil = MK48_RECOIL;
        recoilProne = MK48_RECOIL;
        ace_overheating_closedBolt = MK48_CLOSEDBOLT;
    };
    class Tier1_MK48_Mod0_Para : Tier1_MK48_Mod0
    {
        recoil = MK48_RECOIL;
        recoilProne = MK48_RECOIL;
        ace_overheating_closedBolt = MK48_CLOSEDBOLT;
    };
    class Tier1_MK48_Mod0_Para_Desert : Tier1_MK48_Mod0_Para
    {
        recoil = MK48_RECOIL;
        recoilProne = MK48_RECOIL;
        ace_overheating_closedBolt = MK48_CLOSEDBOLT;
    };
    class Tier1_MK48_Mod1 : Tier1_MK48_Mod0
    {
        recoil = MK48_RECOIL;
        recoilProne = MK48_RECOIL;
        ace_overheating_closedBolt = MK48_CLOSEDBOLT;
    };
    class Tier1_MK48_Mod1_Desert : Tier1_MK48_Mod1
    {
        recoil = MK48_RECOIL;
        recoilProne = MK48_RECOIL;
        ace_overheating_closedBolt = MK48_CLOSEDBOLT;
    };

    // ---- MK46 variants -----------------------------------------------------
    class Tier1_MK46_Mod0 : Tier1_SAW_Base
    {
        recoil = MK46_RECOIL;
        recoilProne = MK46_RECOIL;
        ace_overheating_closedBolt = MK46_CLOSEDBOLT;
    };
    class Tier1_MK46_Mod0_Desert : Tier1_MK46_Mod0
    {
        recoil = MK46_RECOIL;
        recoilProne = MK46_RECOIL;
        ace_overheating_closedBolt = MK46_CLOSEDBOLT;
    };
    class Tier1_MK46_Mod0_Para : Tier1_MK46_Mod0
    {
        recoil = MK46_RECOIL;
        recoilProne = MK46_RECOIL;
        ace_overheating_closedBolt = MK46_CLOSEDBOLT;
    };
    class Tier1_MK46_Mod0_Para_Desert : Tier1_MK46_Mod0
    {
        recoil = MK46_RECOIL;
        recoilProne = MK46_RECOIL;
        ace_overheating_closedBolt = MK46_CLOSEDBOLT;
    };
    class Tier1_MK46_Mod1 : Tier1_MK46_Mod0
    {
        recoil = MK46_RECOIL;
        recoilProne = MK46_RECOIL;
        ace_overheating_closedBolt = MK46_CLOSEDBOLT;
    };
    class Tier1_MK46_Mod1_Desert : Tier1_MK46_Mod1
    {
        recoil = MK46_RECOIL;
        recoilProne = MK46_RECOIL;
        ace_overheating_closedBolt = MK46_CLOSEDBOLT;
    };
    class Tier1_MK46_Mod1_Savit : Tier1_MK46_Mod1
    {
        recoil = MK46_RECOIL;
        recoilProne = MK46_RECOIL;
        ace_overheating_closedBolt = MK46_CLOSEDBOLT;
    };
    class Tier1_MK46_Mod1_Savit_Desert : Tier1_MK46_Mod1
    {
        recoil = MK46_RECOIL;
        recoilProne = MK46_RECOIL;
        ace_overheating_closedBolt = MK46_CLOSEDBOLT;
    };
};
