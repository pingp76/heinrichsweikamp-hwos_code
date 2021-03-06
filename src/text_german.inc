;=============================================================================
;
;    File text_german.asm
;
;    German texts translation file.
;
;   Copyright (c) 2011, JD Gascuel, HeinrichsWeikamp, all right reserved.
;=============================================================================

; Basic texts
	TCODE	tNo,    "Nein"              ; No
	TCODE	tYes,   "Ja"                ; Yes = No + 1

; Surface-mode texts
    TCODE   tBeta,      "beta"          ; beta
	TCODE	tMenu,		"<Men�"     	; <Menu
    TCODE   tView,      "View>"         ; View>
    TCODE   tHeading,   "Kurs:"         ; Heading:
    TCODE   tLastDive,	"Letzter TG"	; Last Dive (Max 10 chars)

; Divemode Menu
    TCODE   tDivemenu_Gaslist,  "Gasliste"    ; Gaslist
    TCODE   tDivemenu_ResetAvg, "Stoppuhr"    ; Reset Avg.
    TCODE   tDivemenu_Setpoint, "Setpoint"      ; Setpoint
    TCODE   tDivemenu_UseSensor,"Akt. Sensor"    ; Use Sensor
    TCODE   tDivemenu_ToggleGF, "Toggle GF"     ; Toggle GF
    TCODE   tDivemenu_Marker,   "Markierung"    ; Set Marker
    TCODE   tDivemenu_LostGas,  "Gasverlust"    ; Lost Gas

; Main menu
    TCODE   tNext,      "<Weiter"         ; <Next
    TCODE   tEnter,     "Enter>"        ; Enter>

    TCODE   tMainMenu,  "Hauptmen�"     ; MainMenu
    TCODE   tLogbook,   "Logbuch"       ; Logbook
    TCODE   tGasSetup,  "OC Gas Setup"  ; OC Gas Setup
    TCODE   tSetTime,   "Zeit stellen" ; Set Time
	TCODE	tSetDate,	"Datum stellen"	; Set Date
	TCODE	tSetTimeDate,"Datum & Uhrzeit"; Set Time & Date
    TCODE   tDispSets,  "Anzeige" ; Display Settings
    TCODE   tExit,      "Ende"          ; Exit
	TCODE	tResetMenu, "Reset Men�"	; Reset Menu
	TCODE	tDiveModeMenu,"Dekoberechnung"	; Deco Mode
	TCODE	tInfoMenu,	"Informationen"	; Information
    TCODE   tCCRSetup,  "CCR Men�"     ; CCR Setup
    TCODE   tDiluentSetup,"Diluent Men�"   ; Diluent Setup
    TCODE   tFixedSetpoints,"Feste Setpoints" ; Fixed Setpoints
    TCODE   tCCRSensor, "CCR Sensor"    ; CCR Sensor
    TCODE   tCalibrateMenu, "Kalibrierung"   ; Calibration
    TCODE   tCalibrationGas, "Kal. Gas O2:"  ; Cal. Gas O2:
    TCODE   tCalibrate, "Kalibrieren"     ; Calibrate

; Gas menu
    TCODE   tGaslist,   "OC Gas Liste"
    TCODE   tGaslistCC, "CC Gas Liste"  ; CC Diluents
    TCODE   tGasEdit,   "Gas einstellen"
    TCODE   tType,      "Type: "
    TCODE   tGasDisabled,"Deaktiviert"  ; Disabled
    TCODE   tGasFirst,   "Start"        ; First
    TCODE   tGasTravel,  "Reise"        ; Travel
    TCODE   tGasDeco,    "Deko"         ; Deco
    TCODE   tDilDisabled,"Deaktiviert"  ; Disabled
    TCODE   tDilFirst,   "Start"        ; First
    TCODE   tDilNorm,   "Normal"        ; Normal
    TCODE   tAir,       "Luft "         ; Enum: values must follows (5 chars)
    TCODE   tO2,        "O2   "         ; tAir + 5
    TCODE   tO2Plus,    "O2 +"
    TCODE   tO2Minus,   "O2 -"
    TCODE   tHePlus,    "He +"
    TCODE   tHeMinus,   "He -"
    TCODE   tMOD,       "MOD:"
    TCODE   tEAD,       "EAD:"
    TCODE   tGasDepth,  "Wechseltiefe"
    TCODE   tDepthPlus, "Tiefe +"
    TCODE   tDepthMinus,"Tiefe -"
    TCODE   tDepthReset,"Reset auf MOD:"
    TCODE   tSetup_mix, "Mix Einstellen"
    TCODE   tCCRMode,   "CCR Modus:"             ; CCR Mode:
    TCODE   tCCRModeFixedSP,  "Fester SP"        ; Fixed SP
    TCODE   tCCRModeSensor,   "Sensor"          ; Sensor
    TCODE   tCCRModeAutoSP,   "Auto SP"         ; Auto SP
    TCODE   tSP,            "SP"                ; SP (SetPoint)
    TCODE   tSPPlus,    "ppO2+"                  ; pO2+
    TCODE   tSensorFallback, "Fallback:"        ; Fallback:
    TCODE   tppO2,      "ppO2:"                 ; ppO2:

; New batteries menu
	TCODE   tNewBattTitle,      "Neue Batterie?"
	TCODE	tNewBattOld,		"Behalte alte"
	TCODE	tNewBattNew36,		"Neue 3,6V Saft"
	TCODE	tNewBattNew15,		"Neue 1,5V AA"
	TCODE	tNewBattAccu,		"3,6V AA Akku"
 	TCODE	tNew18650,		"Interne 18650"
	TCODE	tNew16650,		"Interne 16650"

; Gaslist management
    TCODE   tGas,       "Gas"           ; Gas
    TCODE   tGasErr,    "Err"           ; Err  (3 chars)

; Communication Menu
	TCODE	tUsbTitle,	"USB Modus"
    TCODE   tBleTitle,  "Bluetooth Modus"
	TCODE	tUsbStarting,  "Starte....."
	TCODE	tUsbStartDone, "Fertig."
	TCODE	tUsbServiceMode, "Servicemodus aktiv"
	TCODE	tUsbClosed,		"Abgebrochen"
	TCODE	tUsbExit,		"Beendet"
	TCODE	tUsbDownloadMode, "Downloadmodus aktiv"
    TCODE   tUsbLlBld,      "Low-Level Bootloader"

; Dive Settings
    TCODE   tDvMode,    "Betrieb:"
    TCODE   tDvOC,      "OC"
    TCODE   tDvCC,      "CC"
    TCODE   tDvGauge,   "Gauge"
    TCODE   tDvApnea,   "Apnoe"
    TCODE   tDvPSCR,	"PSCR"
    TCODE   tDkMode,    "Dekotyp:"
    TCODE   tZHL16,     "ZH-L16"
    TCODE   tZHL16GF,   "ZH-L16+GF"
    TCODE   tPPO2Max,   "ppO2 Max:"
    TCODE   tPPO2DECO,	"ppO2 Deko:"
    TCODE   tPPO2MIN,   "ppO2 Min:"
    TCODE   tLastDecostop, "Letzt. Stop:"
    TCODE   tDecoparameters, "Deko Parameter"
    TCODE   tGF_low,    "GF low:"
    TCODE   tGF_high,   "GF high:"
    TCODE   tSaturationMult,    "S�ttigung:"
    TCODE   tDesaturationMult,  "Ents�ttigung:"
    TCODE   tFTTSMenu,  "Future TTS:"            ; Future TTS
    TCODE   taGFMenu,   "Alternativ-GF"         ; Alternative GF
    TCODE   taGF_low,   "aGF low:"               ; aGF low
    TCODE   taGF_high,  "aGF high:"              ; aGF high
    TCODE   taGF_enable,"aGF w�hlbar:"        ; aGF Selectable
    TCODE   tDiveaGF_active,"aGF aktiv"      ; aGF Active
    TCODE   tppO2settings,"ppO2 Parameter"   ; ppO2 Settings
    TCODE   tsafetystopmenu,"Sicherheitsstop:"       ; Safety Stop:

; Display Settings
    TCODE   tBright,    "Helligkeit:"
    TCODE   tEco,       "Eco"
    TCODE   tMedium,    "Mittel"
    TCODE   tHigh,      "Hoch"
    TCODE   tDvSalinity,"Salinit�t:"             ; Salinity
    TCODE   tFlip,      "Anzeige drehen:"        ; Rotate Screen
    TCODE   tMODwarning,"MOD Warnung:"           ; MOD warning
    TCODE   tShowppO2,  "ppO2 Dauerhaft:"        ; Always show ppO2:
    TCODE   tTimeoutDive,"TG-Ende nach:"	; Dive Timeout

; VSI display Settings
    TCODE   tVSItext2,  "Variable Geschw.:"     ; Variable speed:
    TCODE   tVSIgraph,  "Geschw. Grafik:"        ; Speed graph:

; Setup Menu
    TCODE   tSystSets,  "Konfiguration"
    TCODE   tLanguage,  "Sprache:"
    TCODE   tEnglish,   "Englisch"
    TCODE   tGerman,    "Deutsch"
    TCODE   tFrench,    "Franz�sisch"
    TCODE   tItalian,   "Italienisch"
    TCODE   tCompassMenu,"Kompass-kalibrierung"  ; Compass calibration
    TCODE   tCompassGain,"Empfindlichkeit:"      ; Compass gain:

    TCODE   tUnits,     "Einheiten:"
    TCODE   tMetric,     " m/�C"            ; Enum menu
    TCODE   tImperial,   "ft/�F"

    TCODE   tDefName,   "HW OSTC"
	TCODE	tbar,		"bar"				; bar

    TCODE   tButtonleft,"Taster links:"      ; Left button
    TCODE   tButtonright,"Taster rechts:"    ; Right button

; Units for all menu
    TCODE   tMeters,    "m"
	TCODE	tFeets,		"ft"
	TCODE	tFeets1,	"f"
    TCODE   tMinutes,   "'"
    TCODE   tPercent,   "%"
    TCODE   tLitersMinute, "l/min"

; Date
	TCODE	tDateFormat, "Datum:"
	TCODE	tDateformat, "MMTTJJ"
	TCODE	tDateformat1,"TTMMJJ"
	TCODE	tDateformat2,"JJMMTT"

; Simulator menu
    TCODE   tInter, 	"Start Simulator"  ; Start Simulator
    TCODE   tPlan,  	"Simulator"        ; Simulator

; Decoplanner submenu
    TCODE   tBtTm,  	"Grundzeit:"        ; Bot. Time: (10 chars)
    TCODE   tBtTm_short,"Zeit:"             ; Bot. Time: (max. 6 chars)
    TCODE   tMxDep, 	"Max.Tiefe:"        ; Max Depth: (10 chars)
    TCODE   tIntvl, 	"Intervall:"        ; Interval : (10 chars)
    TCODE   tDeco,  	"Deko berechnen"    ; Calculate Deco
    TCODE   tDivePlan,  "Tauchplan:"        ; Dive Plan:
    TCODE   tNoDeco,    "Keine Deco"        ; No Deco
    TCODE   tMore,      "Mehr..."           ; More...
    TCODE   tGasUsage,  "Verbrauch"         ; Gas Usage
    TCODE   tSetBotUse, "Reise Gas: "       ; Bottom Gas: (space)
    TCODE   tSetDecoUse,"Deko Gas: "        ; Deco Gas: (space)

; Information menu
    TCODE   tFirmware,  "Firmware: "        ; Firmware: (space)
    TCODE   tSerial,    "Seriennr.: "        ; Serial  : (space)
	TCODE	tTotalDives,"Anzahl TG: "		; Total Dives:
    TCODE   tBatteryV,  "Batterie: "        ; Battery:
    TCODE   tUptime,	"Uptime: "	    ; Uptime: 

; Divemode screen
    TCODE   tNDL,       " NZ"
    TCODE   tTTS,   	"TTS"
	TCODE	tVelMetric,	 "m/min"
	TCODE	tVelImperial,"ft/m "
	TCODE	tGasSelect,  "W�hle Gas"       ; Select Gas
	TCODE	tSelectAir,	 "Air "     		; Air
	TCODE	tSelectO2,	 "O2  "             ; O2
    TCODE   tSelectNx,   "Nx"               ; Nx
    TCODE   tSelectTx,   "Tx"               ; Tx
    TCODE   tDepth,      "Tiefe"            ; Depth
    TCODE   tMaxDepth,   "Max. Tiefe"       ; Max. Depth - max 10chars!
    TCODE   tDivetime,   "    Zeit"         ; Divetime
    TCODE   tDiveHudMask1,  "Sensor 1"
    TCODE   tDiveHudMask2,  "Sensor 2"
    TCODE   tDiveHudMask3,  "Sensor 3"
    TCODE   tDiveTotalAvg,  "Durchschn.1"   
    TCODE   tDiveStopwatch, "Stoppuhr"
    TCODE   tDiveStopAvg,   "Durchschn.2"   ; 11chars max
    TCODE   tApnoeTotal,    " Total"        ; Total (Six chars, right alligned)
    TCODE   tApnoeMax,      "  Letzter TG"  ; Last descend
    TCODE   tApnoeSurface,  "Oberfl�chenzeit"  ; Surface Time
    TCODE   tDiveDecoplan,  "Dekoplan"      ; Decoplan
    TCODE   tDiveClock,     "Uhr"           ; Clock
    TCODE   tDiveEAD_END,   "EAD/END"       ; EAD/END
    TCODE   tDiveTissues,   "Gewebe"        ; Tissues
    TCODE   tEND,           "END:"          ; END:
    TCODE   tHe,            "He"            ; He
    TCODE   tN2,            "N2"            ; N2
    TCODE   tDiveBailout,   "Bailout"       ; Bailout
    TCODE   tGFactors,      "GF Values"     ; GF Values
    TCODE   taGFactors,     "aGF Values"    ; aGF Values
    TCODE   tGFInfo,        "GF Info"       ; GF Info
    TCODE   tCeiling,       "Ceiling"       ; Ceiling
    TCODE   tDiveSafetyStop,"Stop"         ; Stop (Four chars, right alligned)
    TCODE   tDiveFallback,  "Fallback!"     ; Fallback! (max. nine chars)
    TCODE   tSensorCheck,   "Sensor Test"   ; Sensor Check

; Divemode menu
    TCODE   tDivePreMenu,   "Men�?"         ; Menu?
    TCODE   tSetHeading,    "Peilung"       ; Bearing (Max. seven chars)

; Simulator menu
	TCODE	tQuitSim,	 "Ende?"            ; Quit Simulation?

; Logbook
	TCODE	tCNS2,		"ZNS:"
	TCODE	tAVG,		"Mit:"
	TCODE	tGF,		"GF:"
	TCODE	tSAT,		"S�t:"					; Sat:

; Logbook units
	TCODE	tLogTunitC,	"�C"	
	TCODE	tLogTunitF,	"�F"
	TCODE	tKGL,		"kg/l"
	TCODE	tMBAR,		"mbar"

; Logbook menu
	TCODE	tNextLog, 	"N�chste Seite"

; Reset menu
	TCODE	tReboot,	"Neu starten"			;Reboot
	TCODE	tResetMenu2,"Sind Sie sicher?"		;Are you sure?
	TCODE	tAbort,     "Abbrechen"             ;Abort
	TCODE	tResetSettings, "Alles zur�cksetzen";Reset all
	TCODE	tResetDeco,	"Deko zur�cksetzen"		;Reset Deco
    TCODE	tResetBattery,	"Batterie zur�cksetzen"		;Reset Battery
    TCODE	tResetLogbook,	"Logbuch zur�cksetzen"		;Reset Logbook

; Set Time Menu/Set Date Menu
	TCODE	tSetHours,	"Stunden einst."	; Set Hours
	TCODE	tSetMinutes,"Minuten einst."	; Set Minutes
	TCODE	tSetSeconds,"Sekunden zur�cks."	; Clear seconds
	TCODE	tSetDay,	"Setze Tag"			; Set Day
	TCODE	tSetMonth,	"Setze Monat"		; Set Month
	TCODE	tSetYear,	"Setze Jahr"		; Set Year

; Logbook Offset Menu
	TCODE	tLogOffset,		"Logbuch offset"	; Logbook offset
	TCODE	tLogOffsetp1,	"+1"				; +1
	TCODE	tLogOffsetp10,	"+10"				; +10
	TCODE	tLogOffsetm1,	"-1"				; -1
	TCODE	tLogOffsetm10,	"-10"				; -10

; Sampling rate
    TCODE   tSamplingrate,  "Abtastrate:"       ; Sampling rate:
    TCODE   tSampling2s,    "2s"                ; 2s
    TCODE   tSampling10s,   "10s"               ; 10s

; Compass directions
    TCODE   tN,             "N "                ; N(orth),338�-22�
    TCODE   tNE,            "NO"                ; North-East,23�-67�
    TCODE   tE,             "O "                ; E(east),68�-112�
    TCODE   tSE,            "SO"                ; South-East,113�-157�
    TCODE   tS,             "S "                ; S(outh),157�-202�
    TCODE   tSW,            "SW"                ; South-West,203�-247�
    TCODE   tW,             "W "                ; W(West),248�-292�
    TCODE   tNW,            "NW"                ; North-West,293�-337�

; Color Scheme menu
    TCODE   tColorScheme,   "Farbschema"        ; Colour Scheme
    TCODE   tColorSetDive,  "Tauchmodus:"       ; Divemode:
    TCODE   tColorSetName0, "Standard"          ; Standard
    TCODE   tColorSetName1, "Rot"               ; Red
    TCODE   tColorSetName2, "Gr�n"              ; Green
    TCODE   tColorSetName3, "Blau"              ; Blue
    
    ; PSCR Menu and Settings
    TCODE   tPSCRMenu,	    "PSCR Men�"		; PSCR Menu
    TCODE   tPSCR_O2_drop,  "O2 drop:"		; O2 drop
    TCODE   tPSCR_lungratio,"Lung ratio:"	; lung ratio
