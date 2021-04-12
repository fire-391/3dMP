private _dialogResult = [
    "Shift Temperature",
    [
        [
            "Shift",
            [
                "-4",
                "-3",
                "-2",
                "-1",
                "0",
                "1",
                "2",
				"3",
				"4"
            ],
            0
        ]
    ]
] call ares_fnc_showChooseDialog;

if (_dialogResult isEqualTo []) exitWith {};

private _shift = [-4, -3, -2, -1, 0, 1, 2, 3, 4] select (_dialogResult select 0);

ace_weather_temperatureShift = _shift;
publicVariable "ace_weather_temperatureShift";
