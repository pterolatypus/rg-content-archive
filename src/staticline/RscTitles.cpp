//Get RscTitle scaling values from variables (as set by the in-game ui editor)
#define GUI_GRID_X (profilenamespace getVariable ['IGUI_rg_staticline_jumplist_X', 0])
#define GUI_GRID_Y (profilenamespace getVariable ['IGUI_rg_staticline_jumplist_Y', 0])
#define GUI_GRID_W (profilenamespace getVariable ['IGUI_rg_staticline_jumplist_W', 0.025])
#define GUI_GRID_H (profilenamespace getVariable ['IGUI_rg_staticline_jumplist_H', 0.04])

class RscText;
class RscPicture;
class RscListbox;

class RscTitles {
    class GVAR(jumplist) {
        idd = 1386;
        movingEnable = 1;
        duration = 9999999;
        fadein = 0;
        fadeout = 0;
        onLoad = uiNamespace setVariable [QGVAR(jumpListDisplay), _this select 0];
        onUnload = uiNamespace setVariable [QGVAR(jumpListDisplay), nil];

        class controls {
            class title: RscText {
                idc = 1000;
                text = "Jump List"; //--- ToDo: Localize;
                x = GUI_GRID_X;
                y = GUI_GRID_Y;
                w = 60/100 * GUI_GRID_W;
                h = 20/100 * GUI_GRID_W;
            };

            class chute_icon: RscPicture {
                idc = 1200;
                text = QPATHTOF(data\ui\chute_icon.paa);
                x = GUI_GRID_X + 70/100 * GUI_GRID_W;
                y = GUI_GRID_Y;
                w = 15/100 * GUI_GRID_W;
                h = 20/100 * GUI_GRID_W;
            };

            class jumper_count: RscText {
            	idc = 1001;
            	text = "25"; //--- ToDo: Localize;
            	x = GUI_GRID_X + 85/100 * GUI_GRID_W;
            	y = GUI_GRID_Y;
            	w = 15/100 * GUI_GRID_W;
            	h = 20/100 * GUI_GRID_W;
                onLoad = uiNamespace setVariable [QGVAR(jumpCount), _this select 0];
                onUnload = uiNamespace setVariable [QGVAR(jumpCount), nil];
            };

            class namelist: RscListbox {
                idc = 1500;
                x = GUI_GRID_X;
                y = GUI_GRID_Y + 8/100 * GUI_GRID_H;
                w = GUI_GRID_W;
                h = GUI_GRID_H - 20/100 * GUI_GRID_W;
                onLoad = uiNamespace setVariable [QGVAR(jumpListBox), _this select 0];
                onUnload = uiNamespace setVariable [QGVAR(jumpListBox), nil];
            };
        };
    };
};


