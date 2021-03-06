#ifndef DATASTRINGS
#define DATASTRINGS

#include "data_enums.h"
#include <MSFS/Legacy/gauges.h>

/*pcstring_<type> holds string inputs required by simconnect function
Ensure that their indices match their corresponding enum definitions.*/

const PCSTRINGZ pcstring_units[enumUnitsCount] = {
    "Bool",
    "Percent",
    "PSI",
    "Number",
    "Enum",
    "Celsius"
    "Feet",
    "Feet per second",
    "Volts",
    "Amperes",
    "Hertz"
};

const PCSTRINGZ pcstring_aSimVars[aSimVarsCount] = {
    "(A:EXTERNAL POWER AVAILABLE, Bool)",
    "(A:EXTERNAL POWER ON, Bool)",
    "(A:FUELSYSTEM VALVE SWITCH:8, Bool)",
    "(A:APU PCT RPM, Percent)",
    "(A:ENG N2 RPM:1, Percent)",
    "(A:ENG N2 RPM:2, Percent)",
    "(A:ENG N1 RPM:1, Percent)",
    "(A:ENG N1 RPM:2, Percent)",
    "(A:APU SWITCH, Bool)",
    "(A:ELECTRICAL MASTER BATTERY:1, Bool)",
    "(A:ELECTRICAL MASTER BATTERY:2, Bool)",
    "(A:AMBIENT TEMPERATURE, Celsius)",
    "(A:TOTAL AIR TEMPERATURE, Celsius)",
    "(A:AMBIENT PRESSURE, inHg)",
    "(A:AIRSPEED TRUE, Knots)",
    "(A:AIRSPEED INDICATED, Knots)",
    "(A:GENERAL ENG MASTER ALTERNATOR:1, Bool)",
    "(A:GENERAL ENG MASTER ALTERNATOR:2, Bool)",
    "(A:APU GENERATOR SWITCH:1, Bool)",
    "(A:BLEED AIR ENGINE:1, Bool)",
    "(A:BLEED AIR ENGINE:2, Bool)",
    "(A:BLEED AIR APU, Bool)",
    "(A:GENERAL ENG STARTER:1, Bool)",
    "(A:GENERAL ENG STARTER:2, Bool)",
    "(A:STRUCTURAL DEICE SWITCH, Bool)",
    "(A:ENG EXHAUST GAS TEMPERATURE:1, Rankine)",
    "(A:ENG EXHAUST GAS TEMPERATURE:2, Rankine)",
    "(A:SIM ON GROUND, Bool)",
    "(A:GROUND ALTITUDE, Meters)",
    "(A:PLANE ALTITUDE, Feet)",
    "(A:PLANE ALT ABOVE GROUND, Feet)",
    "(A:GENERAL ENG THROTTLE LEVER POSITION:1, Percent)",
    "(A:GENERAL ENG THROTTLE LEVER POSITION:2, Percent)",
    "(A:VERTICAL SPEED, Feet per second)",
    "(A:GEAR POSITION, enum)",
    "(A:INTERACTIVE POINT OPEN:0, Percent)",
    "(A:INTERACTIVE POINT OPEN:3, Percent)",
    "(A:INTERACTIVE POINT OPEN:5, Percent)",
    "(C:fs9gps:FlightPlanDestinationAltitude, Feet)"
};

const PCSTRINGZ pcstring_lSimVars[totalRealLVarsCount*2] = {
    //===============================ELEC======================
        "BATT1_ONLINE","Bool",
        "BATT2_ONLINE","Bool",
        "BATT1_CAPACITY", "Amperes",
        "BATT2_CAPACITY","Amperes",
        "BATT1_VOLTAGE","Volts",
        "BATT2_VOLTAGE","Volts",
        "BATT1_AMPERAGE","Amperes",
        "BATT2_AMPERAGE","Amperes",
        "BATT_BUS_LOAD","Amperes",
        "EXT_GEN_ONLINE","Bool",
        "EXT_GEN_VOLTAGE","Volts",
        "EXT_GEN_AMPERAGE","Amperes",
        "EXT_GEN_FREQ","Hertz",
        "APU_GEN_ONLINE","Bool",
        "APU_GEN_VOLTAGE","Volts",
        "APU_GEN_AMPERAGE","Amperes",
        "APU_GEN_FREQ","Hertz",
        "APU_LOAD_PERCENT", "Percent",
        "GEN1_ONLINE","Bool",
        "GEN2_ONLINE","Bool",
        "GEN1_VOLTAGE","Volts",
        "GEN2_VOLTAGE","Volts",
        "GEN1_AMPERAGE","Amperes",
        "GEN2_AMPERAGE","Amperes",
        "GEN1_FREQ","Hertz",
        "GEN2_FREQ","Hertz",
        "GEN1_IDG_TEMP","Celsius",
        "GEN2_IDG_TEMP","Celsius",
        "EMER_ONLINE","Bool",
        "EMER_VOLTAGE","Volts",
        "EMER_AMPERAGE","Amperes",
        "EMER_FREQ","Hertz",
        "AC_BUS1","Enum",
        "AC_BUS2","Enum",
        "AC_ESS","Enum",
        "AC_SHED","Enum",
        "GALLEY_SHED","Enum",
        "DC_BUS1","Enum",
        "DC_BUS2","Enum",
        "DC_BATBUS","Enum",
        "DC_ESS","Enum",
        "DC_SHED","Enum",
        "HOT_BUS1","Enum",
        "HOT_BUS2","Enum",
        "TR1_ONLINE","Bool",
        "TR2_ONLINE","Bool",
        "TRESS_ONLINE","Bool",
        "TR1_VOLTAGE","Volts",
        "TR2_VOLTAGE","Volts",
        "TRESS_VOLTAGE","Volts",
        "TR1_AMPERAGE","Amperes",
        "TR2_AMPERAGE","Amperes",
        "TRESS_AMPERAGE","Amperes",
        "STATICINV_ONLINE", "Bool",
        "STATICINV_VOLTAGE","Volts",
        "STATICINV_AMPERAGE","Amperes",
        "STATICINV_FREQ","Hertz",
        "ACPowerAvailable", "Bool",
        "DCPowerAvailable", "Bool",
        "CIRCUIT", "Number",
        "CIRCUIT_BREAKER", "Number",
        "A32NX_APU_START_ACTIVATED","Bool",
        "A32NX_ELEC_GEN1_FAULT","Bool",
        "A32NX_ELEC_GEN2_FAULT","Bool",
        "A32NX_ELEC_IDG1_FAULT","Bool",
        "A32NX_ELEC_IDG2_FAULT","Bool",
        "A32NX_ELEC_IDG1_TOGGLE","Bool",
        "A32NX_ELEC_IDG2_TOGGLE","Bool",
        "A32NX_ELEC_BUSTIE_TOGGLE","Bool",
        "A32NX_ELEC_ACESSFEED_FAULT","Bool",
        "A32NX_ELEC_ACESSFEED_TOGGLE","Bool",
        "A32NX_ELEC_COMMERCIAL_TOGGLE","Bool",
        "A32NX_ELEC_COMMERCIAL_FAULT","Bool",
        "A32NX_ELEC_GALYCAB_TOGGLE","Bool",
        "A32NX_ELEC_GALYCAB_FAULT","Bool",
        //===============================BLEED=========================
        "ENG1_IP_VALVE", "Number",
        "ENG2_IP_VALVE","Number",
        "ENG1_HP_VALVE","Number",
        "ENG2_HP_VALVE","Number",
        "ENG1_BLEED_VALVE","Number",
        "ENG2_BLEED_VALVE","Number",
        "APU_BLEED_VALVE","Number",
        "GPU_BLEED_VALVE","Number",
        "ENG1_BLEED_STARTER_VALVE","Number",
        "ENG2_BLEED_STARTER_VALVE","Number",
        "WING_ANTICE_VALVE","Number",
        "X_BLEED_VALVE","Enum",
        "ENG1_BLEED_PRESSURE","PSI",
        "ENG2_BLEED_PRESSURE","PSI",
        "ENG1_BLEED_TEMPERATURE","Celsius",
        "ENG2_BLEED_TEMPERATURE","Celsius",
        "APU_BLEED_PRESSURE","PSI",
        "APU_BLEED_TEMPERATURE","Celsius",
        "GPU_BLEED_PRESSURE","PSI",
        "GPU_BLEED_TEMPERATURE","Celsius",
        "DUCT1","Enum",
        "DUCT2","Enum",
        "DUCT1_TEMPERATURE","Celsius",
        "DUCT2_TEMPERATURE", "Celsius",
        "DUCT1_PRESSURE", "PSI",
        "DUCT2_PRESSURE", "PSI",
        "A32NX_KNOB_OVHD_AIRCOND_XBLEED_Position","Enum",
        //==============================PACKS============================
        "PACK1_OUTLET_TEMP", "Celsius",
        "PACK2_OUTLET_TEMP", "Celsius",
        "PACK1_CMPRSO_TEMP", "Celsius",
        "PACK2_CMPRSO_TEMP", "Celsius",
        "CKPT_TEMP", "Celsius",
        "FWD_TEMP", "Celsius",
        "AFT_TEMP", "Celsius",
        "A320_Neo_AIRCOND_LVL_1", "Percent",
        "A320_Neo_AIRCOND_LVL_2", "Percent",
        "A320_Neo_AIRCOND_LVL_3", "Percent",
        "A32NX_AIRCOND_HOTAIR_TOGGLE", "Bool",
        "A32NX_AIRCOND_PACK1_TOGGLE", "Bool",
        "A32NX_AIRCOND_PACK2_TOGGLE", "Bool",
        "A32NX_KNOB_OVHD_AIRCOND_PACKFLOW_POSITION",
        "A32NX_VENTILATION_CABFANS_TOGGLE", "Bool",
        "A32NX_VENTILATION_BLOWER_TOGGLE", "Bool",
        "A32NX_VENTILATION_EXTRACT_TOGGLE", "Bool",
        //=============================ENGINES============================
        "A32NX_FIRE_TEST_PUSH_FIRE_ENG1_TEST", "Bool",
        "A32NX_FIRE_TEST_PUSH_FIRE_ENG2_TEST", "Bool",
        "A32NX_FIRE_TEST_PUSH_FIRE_APU_TEST", "Bool",
        "A32NX_FIRE_BUTTON_PUSH_OVHD_FIRE_ENG1", "Bool",
        "A32NX_FIRE_BUTTON_PUSH_OVHD_FIRE_ENG2", "Bool",
        "A32NX_FIRE_BUTTON_PUSH_OVHD_FIRE_APU", "Bool",
        "APU_FLAP_OPEN","Percent",
        "APU_N1", "Percent",
        "APU_EGT","Celsius",
        "APU_EGT_WARN", "Celsius",
        //=============================PRESS==============================
        "OUTFLOW_VAVLE_PCT","Percent",
        "SAFETY_VAVLE_1", "Bool",
        "SAFETY_VALVE_2", "Bool",
        "VENT_INLET_VALVE", "Percent",
        "VENT_OUTLET_VALVE", "Percent",
        "CABIN_ALTITUDE","Feet",
        "CABIN_ALTITUDE_GOAL","Feet",
        "CABIN_ALTITUDE_RATE","Feet per second",
        "DELTA_PRESSURE","PSI",
        "LANDING_ELEV_MODE","Bool",
        "LANDING_ELEV","Feet",
        "CPC_SYS1", "Bool",
        "CPC_SYS2", "Bool",
        "A32NX_LANDING_ELEVATION","Feet",
        "XMLVAR_KNOB_OVHD_CABINPRESS_LDGELEV","Percent",
        "A32NX_CAB_PRESS_MODE_MAN", "Bool",
        "A32NX_MAN_VS_CONTROL","Enum",
        "A32NX_DITCHING", "Bool"
};

#endif // !DATASTRINGS
