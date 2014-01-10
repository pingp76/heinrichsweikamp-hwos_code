;=============================================================================
;
;   File adc.inc
;
;
;   Copyright (c) 2011, JD Gascuel, HeinrichsWeikamp, all right reserved.
;=============================================================================
; HISTORY
;  2011-08-08 : [mH] moving from OSTC code

	extern	get_battery_voltage     ; And percent...
    extern	get_ambient_level
    extern  get_rssi_level
    extern  reset_battery_pointer   ; Resets battery pointer 0x07-0x0C and battery_gauge:5
