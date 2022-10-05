#include "../../component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

//if the variable doesn't exist it means ASL isn't loaded, so there's nothing to do
if (isNil "ASL_SLING_LOAD_POINT_CLASS_HEIGHT_OFFSET") exitwith {};

_curIndex = ASL_SLING_LOAD_POINT_CLASS_HEIGHT_OFFSET findif {(_x select 0) == QCLASSCOMP(MH47E)};
if (_curIndex > -1) then {
  //if we've already been added to the list just update it with the correct value
  ASL_SLING_LOAD_POINT_CLASS_HEIGHT_OFFSET set [_curIndex, [QCLASSCOMP(MH47E), [-0.8, -1, -1.1]]];
} else {
  //otherwise add correct entry into the list
  ASL_SLING_LOAD_POINT_CLASS_HEIGHT_OFFSET pushBack [QCLASSCOMP(MH47E), [-0.8, -1, -1.1]]
};
