/*
 * Miles' dialog numbers:
 * Horizontal gap between elements: 0.006
 * Horizontal gap to iguiback: 0.012
 * Titlebar and button to iguiback: 0.003
 * Vertical gap between elements: 0.003
 * Vertical gap to iguiback: 0.01
 * Element height: 0.028
 *
 * Static idc list:
 * IGUIBack: 10
 * TitleBar: 11
 * ButtonMenuCancel: 12
 *
 * You _have_ to give any other control an idc
 */

#define DOUBLES(var1,var2) ##var1##_##var2
#define QUOTE(var1) #var1

#define SZX(ARG) x = QUOTE((ARG * safeZoneW) + safeZoneX);
#define SZY(ARG) y = QUOTE((ARG * safeZoneH) + safeZoneY);
#define SZW(ARG) w = QUOTE(ARG * safeZoneW);
#define SZH(ARG) h = QUOTE(ARG * safeZoneH);

#define TITLE_BAR class MRB_RscText_TitleBar: MRB_RscTitleBar_Base
#define IGUIBACK class MRB_IGUIBack: MRB_IGUIBack_Base
#define BUTTON_MENU_CANCEL class MRB_RscButtonMenuCancel: MRB_RscButtonMenuCancel_Base
#define DIALOG(NAME) class MRB_##NAME##_Dialog: MRB_Dialog
#define CONTROLS class Controls

#define TEXT(NAME) class DOUBLES(MRB_RscText,NAME): MRB_RscText_Base
#define EDIT(NAME) class DOUBLES(MRB_RscEdit,NAME): MRB_RscEdit_Base
#define CHECKBOX(NAME) class DOUBLES(MRB_RscCheckbox,NAME): MRB_RscCheckbox_Base
#define FRAME(NAME) class DOUBLES(MRB_RscFrame,NAME): MRB_RscFrame_Base
#define PICTURE(NAME) class DOUBLES(MRB_RscPicture,NAME): MRB_RscPicture_Base
#define COMBO(NAME) class DOUBLES(MRB_RscCombo,NAME): MRB_RscCombo_Base
#define BUTTON_MENU(NAME) class DOUBLES(MRB_RscButtonMenu,NAME): MRB_RscButtonMenu_Base
#define LIST(NAME) class DOUBLES(MRB_RscList,NAME): MRB_RscList_Base

class MRB_RscText_Base {
    deletable = 0;
    fade = 0;
    access = 0;
    type = 0;
    SZH(0.028)
    colorBackground[] = {0,0,0,0.5};
    colorText[] = {1,1,1,1};
    fixedWidth = 0;
    style = 0;
    shadow = 1;
    colorShadow[] = {0,0,0,0.5};
    font = "RobotoCondensed";
    sizeEx = "(((safezoneW / safezoneH) min 1.2) / 30)";
    linespacing = 1;
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {1,1,1,1};
    tooltipColorShade[] = {0,0,0,0.65};
    text = "";
};

class MRB_RscTitleBar_Base: MRB_RscText_Base {
    idc = 11;
    colorBackground[] = {
        "(profileNamespace getVariable ['gui_bcg_rgb_r',0])",
        "(profileNamespace getVariable ['gui_bcg_rgb_g',0])",
        "(profileNamespace getVariable ['gui_bcg_rgb_b',0])",
        "(profileNamespace getVariable ['gui_bcg_rgb_a',1])"
    };
    font = "PuristaMedium";
};

class MRB_RscEdit_Base: MRB_RscText_Base {
    type = 2;
    colorText[] = {0.95,0.95,0.95,1};
    colorDisabled[] = {1,1,1,0.25};
    colorSelection[] = {
        "(profileNamespace getVariable ['gui_bcg_rgb_r',0.77])",
        "(profileNamespace getVariable ['gui_bcg_rgb_g',0.51])",
        "(profileNamespace getVariable ['gui_bcg_rgb_b',0.08])",
        "(profileNamespace getVariable ['gui_bcg_rgb_a',1])"
    };
    autocomplete = "";
    size = 0.2;
    style = 64;
    shadow = 2;
    canModify = 1;
};

#define CHKTEX(CHK) QUOTE(TRIPLES(\a3\ui_f\data\gui\rsccommon\rsccheckbox\checkbox,CHK,ca.paa))

class MRB_RscCheckbox_Base: MRB_RscEdit_Base {
    type = 77;
    style = 0;
    checked = 0;
    color[] = {1,1,1,0.7};
    colorFocused[] = {1,1,1,1};
    colorHover[] = {1,1,1,1};
    colorPressed[] = {1,1,1,1};
    colorDisabled[] = {1,1,1,0.2};
    colorBackground[] = {0,0,0,0};
    colorBackgroundFocused[] = {0,0,0,0};
    colorBackgroundHover[] = {0,0,0,0};
    colorBackgroundPressed[] = {0,0,0,0};
    colorBackgroundDisabled[] = {0,0,0,0};
    textureChecked = CHKTEX(checked);
    textureUnchecked = CHKTEX(unchecked);
    textureFocusedChecked = CHKTEX(checked);
    textureFocusedUnchecked = CHKTEX(unchecked);
    textureHoverChecked = CHKTEX(checked);
    textureHoverUnchecked = CHKTEX(unchecked);
    texturePressedChecked = CHKTEX(checked);
    texturePressedUnchecked = CHKTEX(unchecked);
    textureDisabledChecked = CHKTEX(checked);
    textureDisabledUnchecked = CHKTEX(unchecked);
    soundEnter[] = {"",0.1,1};
    soundPush[] = {"",0.1,1};
    soundClick[] = {"",0.1,1};
    soundEscape[] = {"",0.1,1};
    SZW(0.0196875)
};

class MRB_RscFrame_Base: MRB_RscEdit_Base {
    type = 0;
    sizeEx = 0.02;
};

class MRB_RscPicture_Base: MRB_RscText_Base {
    style = 48;
    colorBackground[] = {0,0,0,0};
    shadow = 0;
};

class MRB_RscCombo_Base: MRB_RscText_Base {
    type = 4;
    colorSelect[] = {0,0,0,1};
    colorBackground[] = {0,0,0,1};
    colorScrollbar[] = {1,0,0,1};
    colorDisabled[] = {1,1,1,0.25};
    colorPicture[] = {1,1,1,1};
    colorPictureSelected[] = {1,1,1,1};
    colorPictureDisabled[] = {1,1,1,0.25};
    colorPictureRight[] = {1,1,1,1};
    colorPictureRightSelected[] = {1,1,1,1};
    colorPictureRightDisabled[] = {1,1,1,0.25};
    colorTextRight[] = {1,1,1,1};
    colorSelectRight[] = {0,0,0,1};
    colorSelect2Right[] = {0,0,0,1};
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {1,1,1,1};
    tooltipColorShade[] = {0,0,0,0.65};
    soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
    soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
    soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
    maxHistoryDelay = 1;
    class ComboScrollBar {
        color[] = {1,1,1,1};
        colorActive[] = {1,1,1,1};
        colorDisabled[] = {1,1,1,0.3};
        width = 0;
        height = 0;
        autoScrollEnabled = 0;
        autoScrollSpeed = -1;
        autoScrollDelay = 5;
        autoScrollRewind = 0;
        thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
        arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
        arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
        border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
        shadow = 0;
        scrollSpeed = 0.06;
    };
    style = "0x10 + 0x200";
    shadow = 0;
    colorSelectBackground[] = {1,1,1,0.7};
    arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
    arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
    wholeHeight = 0.45;
    colorActive[] = {1,0,0,1};
};

class MRB_RscButtonMenu_Base: MRB_RscText_Base {
    type = 16;
    style = 194;
    default = 0;
    shadow = 0;
    SZW(0.065)
    animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
    animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
    animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
    animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
    animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
    animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
    colorBackground[] = {0,0,0,0.8};
    colorBackgroundFocused[] = {1,1,1,1};
    colorBackground2[] = {0.75,0.75,0.75,1};
    color[] = {1,1,1,1};
    colorFocused[] = {0,0,0,1};
    color2[] = {0,0,0,1};
    colorText[] = {1,1,1,1};
    colorDisabled[] = {1,1,1,0.25};
    textSecondary = "";
    colorSecondary[] = {1,1,1,1};
    colorFocusedSecondary[] = {0,0,0,1};
    color2Secondary[] = {0,0,0,1};
    colorDisabledSecondary[] = {1,1,1,0.25};
    sizeExSecondary = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
    fontSecondary = "PuristaLight";
    period = 1.2;
    periodFocus = 1.2;
    periodOver = 1.2;
    size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
    sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
    soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
    soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
    soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
    soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
    textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
    class TextPos {
        left = "0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
        top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
        right = 0.005;
        bottom = 0;
    };
    class Attributes {
        font = "PuristaLight";
        color = "#E5E5E5";
        align = "left";
        shadow = "(false)";
    };
    class ShortcutPos {
        left = "5.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
        top = 0;
        w = "1 * (((safezoneW / safezoneH) min 1.2) / 40)";
        h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
    };
    class HitZone {
        left = 0;
        top = 0;
        right = 0;
        bottom = 0;
    };
};

class MRB_RscButtonMenuCancel_Base: MRB_RscButtonMenu_Base {
    idc = 12;
    text = "CANCEL";
    action = "closeDialog 2;";
};

class MRB_RscList_Base: MRB_RscText_Base {
    type = 5;
    rowHeight = 0;
    colorDisabled[] = {1,1,1,0.25};
    colorScrollbar[] = {1,0,0,0};
    colorSelect[] = {0,0,0,1};
    colorSelect2[] = {0,0,0,1};
    colorSelectBackground[] = {0.95,0.95,0.95,1};
    colorSelectBackground2[] = {1,1,1,0.5};
    colorBackground[] = {0,0,0,0.3};
    soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
    autoScrollSpeed = -1;
    autoScrollDelay = 5;
    autoScrollRewind = 0;
    arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
    arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
    colorPicture[] = {1,1,1,1};
    colorPictureSelected[] = {1,1,1,1};
    colorPictureDisabled[] = {1,1,1,0.25};
    colorPictureRight[] = {1,1,1,1};
    colorPictureRightSelected[] = {1,1,1,1};
    colorPictureRightDisabled[] = {1,1,1,0.25};
    colorTextRight[] = {1,1,1,1};
    colorSelectRight[] = {0,0,0,1};
    colorSelect2Right[] = {0,0,0,1};
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {1,1,1,1};
    tooltipColorShade[] = {0,0,0,0.65};
    style = 16;
    colorShadow[] = {0,0,0,0.5};
    period = 1.2;
    maxHistoryDelay = 1;
    class ListScrollBar {
        arrowEmpty = "\a3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
        arrowFull = "\a3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
        autoScrollDelay = 5;
        autoScrollEnabled = 1;
        autoScrollRewind = 0;
        autoScrollSpeed = -1;
        border = "\a3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
        color[] = {1,1,1,1};
        colorActive[] = {1,1,1,1};
        colorDisabled[] = {1,1,1,0.3};
        height = 0;
        scrollSpeed = 0.05;
        shadow = 0;
        thumb = "\a3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
        width = 0;
    };
};

class MRB_IGUIBack_Base {
    idc = 10;
    type = 0;
    style = 128;
    text = "";
    colorText[] = {0,0,0,0};
    font = "RobotoCondensed";
    sizeEx = 0;
    shadow = 0;
    colorbackground[] = {0,0,0,0.75};
};

class MRB_Dialog {
    idd = -1;
    name = "MRB_Dialog";
    enableSimulation = 1;
    onLoad = "uiNamespace setVariable ['MRB_display', _this select 0];";
};
