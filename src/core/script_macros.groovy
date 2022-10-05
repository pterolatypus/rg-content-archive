addon = "${prefix}_${component}"

addonInfo = """
name = "$name";
version = $versionShort;
requiredVersion = $reqVersion;
author = "$author";
"""

corepath = /$mainprefix\$prefix\$subprefix/
basepath = /$corepath\$component/

quote = {arg -> /"$arg"/}
doubles = {first, second -> "${first}_${second}"}
pathpart = {root,next -> /$root\$next/}
efunc = {e_component,fname -> "${e_component}_fnc_${fname}"}
func = efunc.curry(addon)

macro_additem = {item,count ->
"""class _xx_$item {
    item = "$item";
    count = $count;
};"""
}
macro_addmag = {item,count ->
"""class _xx_$item {
    magazine = "$item";
    count = $count;
};"""
}
macro_addweapon = {item,count ->
"""class _xx_$item {
    weapon = "$item";
    count = $count;
};"""
}
macro_addbackpack = {item,count ->
"""class _xx_$item {
    backpack = "$item";
    count = $count;
};"""
}