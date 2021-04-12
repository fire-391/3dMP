class ACE_Medical_Actions {
    class Advanced {
        class FieldDressing;
        class BloodIV: FieldDressing {
            allowSelfTreatment = 1;
        };
        class BloodIV_500: BloodIV {
            allowSelfTreatment = 1;
        };
        class BloodIV_250: BloodIV {
            allowSelfTreatment = 1;
        };
        class PlasmaIV: BloodIV {
            allowSelfTreatment = 1;
        };
        class PlasmaIV_500: PlasmaIV {
            allowSelfTreatment = 1;
        };
        class PlasmaIV_250: PlasmaIV {
            allowSelfTreatment = 1;
        };
        class SalineIV: BloodIV {
            allowSelfTreatment = 1;
        };
        class SalineIV_500: SalineIV {
            allowSelfTreatment = 1;
        };
        class SalineIV_250: SalineIV {
            allowSelfTreatment = 1;
        };
        class SurgicalKit: FieldDressing {
            allowSelfTreatment = 1;
        };
    };
};