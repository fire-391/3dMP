params ["_crate"];

#include "gear\backpacks.hpp"
#include "gear\facewear.hpp"
#include "gear\headgear.hpp"
#include "gear\mags.hpp"
#include "gear\ftx.hpp"
#include "gear\uniforms.hpp"
#include "gear\vests.hpp"
#include "gear\weapons.hpp"

[_crate, _items + _uniforms + _headgear + _facewear + _vests + _packs + _ftx + _weapons] call ace_arsenal_fnc_initBox;
