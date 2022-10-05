class RG_StaticLine_Actions {
    displayName = CSTRING(interact_parent);
    condition = "[_target] call rg_staticline_fnc_isEnabled";
    icon = QPATHTOF(data\ui\chute_icon.paa);
    class hookon {
        displayName = CSTRING(action_hookon);
        icon = "\z\ace\addons\attach\ui\attach_ca.paa";
        condition = [_player, _target] call FUNC(canHook);
        statement = [QGVAR(hookon), [_player, _target], _target] call cba_fnc_targetEvent;
    };
    class unhook {
        icon = "\z\ace\addons\attach\ui\detach_ca.paa";
        displayName = CSTRING(action_unhook);
        condition = [_player, _target] call FUNC(canUnhook);
        statement = [QGVAR(unhook), [_player, _target], _target] call cba_fnc_targetEvent;
    };
    class selfcheck {
        displayName = CSTRING(action_selfcheck);
        condition = [_player, _target] call FUNC(canJump);
        statement = _player call FUNC(actionSelfCheck);
    };
    class solojump {
        displayName = CSTRING(action_solojump);
        condition = [_player, _target] call FUNC(canSoloJump);
        statement = _player call FUNC(doJump);
    };
    class becomeJumpMaster {
        displayName = CSTRING(action_becomeJumpMaster);
        icon = "\a3\ui_f\data\IGUI\Cfg\HoldActions\holdAction_requestLeadership_ca.paa";
        condition = isNull (_target getVariable [QGVAR(jumpmaster), objNull]);
        statement = [_target, _player] call FUNC(setJumpmaster);
    };
    class releaseJumpMaster {
        displayName = CSTRING(action_releaseJumpMaster);
        icon = "\a3\ui_f\data\IGUI\Cfg\HoldActions\holdAction_passLeadership_ca.paa";
        condition = _target getVariable [QGVAR(jumpmaster), objNull] == _player;
        statement = [_target] call FUNC(setJumpmaster);
    };
    class startjump {
        displayName = CSTRING(action_startjump);
        condition = [_player, _target] call FUNC(canStartJump);
        statement = [_player, _target] call FUNC(startJump);
    };
};