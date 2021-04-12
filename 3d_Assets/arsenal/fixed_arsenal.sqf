params ["_crate"];

#include "gear\backpacks.hpp"
#include "gear\facewear.hpp"
#include "gear\headgear.hpp"
#include "gear\items.hpp"
#include "gear\mags.hpp"
#include "gear\uniforms.hpp"
#include "gear\vests.hpp"
#include "gear\weapons.hpp"

[_crate, _items + _uniforms + _headgear + _facewear + _vests + _packs + _mags + _weapons] call ace_arsenal_fnc_initBox;