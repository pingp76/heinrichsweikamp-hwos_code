;=============================================================================   >> OCTC3 V1.13b > ClaudeDive update proposed.�
;
;    File text_french.asm   
;
;    French texts translation file. 
;
;   Copyright (c) 2011, JD Gascuel, HeinrichsWeikamp, all right reserved.
;=============================================================================

; Basic texts
	TCODE	tNo,    	"Non"        	; No
	TCODE	tYes,   	"Oui"         	; Yes = No + 1

; Surface-mode texts
    TCODE   tBeta,      "b�ta"          ; beta
	TCODE	tMenu,		"<Menu" 		; <Menu
    TCODE   tView,      "Vues>"         ; View>
    TCODE   tHeading,   "Cap:"      ; Heading:
    TCODE   tLastDive,	"Last Dive"	; Last Dive (Max 10 chars)

; Divemode Menu
    TCODE   tDivemenu_Gaslist,  "Liste Gaz"      ; Gas List
    TCODE   tDivemenu_ResetAvg, "RaZChrono"    ; Reset Avg.
    TCODE   tDivemenu_Setpoint, "Setpoint"      ; Setpoint
    TCODE   tDivemenu_UseSensor,"Cellules"    ; Use Sensor
    TCODE   tDivemenu_ToggleGF, "Bascul.GF"     ; Toggle GF
    TCODE   tDivemenu_Marker,   "Rep�re"        ; Set Marker
    TCODE   tDivemenu_LostGas,  "Gaz perdu"     ; Lost Gas

; Main menu
    TCODE   tNext,      "<Suivant"        ; <Next
    TCODE   tEnter,     "Entrer>"        ; Enter>

    TCODE   tMainMenu,  "Menu Principal"; Main Menu
    TCODE   tLogbook,   "Carnet de Plong�e" ; Logbook
    TCODE   tGasSetup,  "Param�tres Gaz OC"  ; OC Gas Setup
    TCODE   tSetTime,   "R�glage Heure"	; Set Time
	TCODE	tSetDate,	"R�glage Date"	; Set Date
	TCODE	tSetTimeDate,"Date & Heure" ; Set Time & Date
    TCODE   tDispSets,  "Pr�f�r. R�glages"	; Display Settings
    TCODE   tExit,      "Retour"        ; Exit
	TCODE	tResetMenu, "Menu RaZ"      ; Reset Menu
	TCODE	tDiveModeMenu,"Menu D�co"	; Deco Mode
	TCODE	tInfoMenu,	"Informations"	; Information
    TCODE   tCCRSetup,  "Param�tres CCR"     ; CCR Setup
    TCODE   tDiluentSetup,"Liste Diluant"   ; Diluent Setup
    TCODE   tFixedSetpoints,"Setpoints fixes" ; Fixed Setpoints
    TCODE   tCCRSensor, "Cellules CCR"    ; CCR Sensor
    TCODE   tCalibrateMenu, "Calibration"   ; Calibration
    TCODE   tCalibrationGas, "Cal. Gas O2:"  ; Cal. Gas O2:
    TCODE   tCalibrate, "Calibrate"     ; Calibrate

; Gas menu
    TCODE   tGaslist,   "Liste Gaz OC"		  ; OC Gas List
    TCODE   tGaslistCC, "Liste Gaz CC"         ; CC Diluents
    TCODE   tGasEdit,   "Pr�f�rence Gaz"     ; Edit Gas
    TCODE   tType,      "Type: "
    TCODE   tGasDisabled,"D�sactiv�"  ; Disabled
    TCODE   tGasFirst,   "Premier"     ; First
    TCODE   tGasTravel,  "Travel"    ; Travel
    TCODE   tGasDeco,    "D�co"      ; Deco
    TCODE   tDilDisabled,"D�sactiv�"  ; Disabled
    TCODE   tDilFirst,   "Premier"     ; First
    TCODE   tDilNorm,   "Normal"     ; Normal
    TCODE   tAir,       "Air  "         ; Enum: values must follows (5 chars)
    TCODE   tO2,        "O2   "         ; tAir + 5
    TCODE   tO2Plus,    "O2 +"
    TCODE   tO2Minus,   "O2 -"
    TCODE   tHePlus,    "He +"
    TCODE   tHeMinus,   "He -"
    TCODE   tMOD,       "MOD:"
    TCODE   tEAD,       "EAD:"
    TCODE   tGasDepth,  "Prof. Changement"         ; Change Depth
    TCODE   tDepthPlus, "Prof. +"
    TCODE   tDepthMinus,"Prof. -"
    TCODE   tDepthReset,"MOD par d�faut:"
    TCODE   tSetup_mix, "Config. Gaz"         ; Setup mix
    TCODE   tCCRMode,   "Mode CCR:"             ; CCR Mode:
    TCODE   tCCRModeFixedSP,  "SP Fixe"        ; Fixed SP
    TCODE   tCCRModeSensor,   "Cellule"          ; Sensor
    TCODE   tCCRModeAutoSP,   "Auto SP"         ; Auto SP
    TCODE   tSP,            "SP"                ; SP (SetPoint)
    TCODE   tSPPlus,    "ppO2+"                  ; pO2+
    TCODE   tSensorFallback, "Fallback:"        ; Fallback:
    TCODE   tppO2,      "ppO2:"                 ; ppO2:

; New batteries menu
	TCODE   tNewBattTitle,      "Nouvelle Batterie?"
	TCODE	tNewBattOld,		"Conserver"
        TCODE	tNewBattNew36,		"R�init. 3.6V Saft"
	TCODE	tNewBattNew15,		"R�init. 1.5V AA"
	TCODE	tNewBattAccu,		"3.6V LiIon AA"
	TCODE	tNew18650,		"Internal 18650"
	TCODE	tNew16650,		"Internal 16650"

	
; Gaslist management
    TCODE   tGas,       "Gaz"           ; Gas
    TCODE   tGasErr,    "Err"           ; Err  (3 chars)

; Communication Menu
	TCODE	tUsbTitle,		"Mode USB"
    TCODE   tBleTitle,      "Mode Bluetooth"
	TCODE	tUsbStarting,  	"D�but..."
	TCODE	tUsbStartDone, 	"Ok."
	TCODE	tUsbServiceMode,"Mode Maintenance"
	TCODE	tUsbClosed,		"Port Ferm�"
	TCODE	tUsbExit,		"Termin�"
	TCODE	tUsbDownloadMode,"Mode T�l�chargement"
    TCODE   tUsbLlBld,      "Chargeur Bas-Niv."

; Dive Settings
    TCODE   tDvMode,    "Mode:"
    TCODE   tDvOC,      "OC"
    TCODE   tDvCC,      "CC"
    TCODE   tDvGauge,   "Gauge"  
    TCODE   tDvApnea,   "Apn�e"
    TCODE   tDvPSCR,	"PSCR"
    TCODE   tDkMode,    "Mod�le:"
    TCODE   tZHL16,     "ZH-L16"
    TCODE   tZHL16GF,   "ZH-L16+GF"
    TCODE   tPPO2Max,   "ppO2 Max:"
    TCODE   tPPO2DECO,	"ppO2 D�co:"
    TCODE   tPPO2MIN,   "ppO2 Min:"
    TCODE   tLastDecostop, "Dern.Palier:"
    TCODE   tDecoparameters, "Param�tres D�co"
    TCODE   tGF_low,    "GF Bas:"
    TCODE   tGF_high,   "GF Haut:"
    TCODE   tSaturationMult,    "Saturation:"
    TCODE   tDesaturationMult,  "D�saturation:"
    TCODE   tFTTSMenu,  "Future DTR:"            ; Future TTS
    TCODE   taGFMenu,   "GF Alternatif"         ; Alternative GF
    TCODE   taGF_low,   "aGF Bas:"               ; aGF Low
    TCODE   taGF_high,  "aGF Haut:"              ; aGF High
    TCODE   taGF_enable,"aGF Possible:"        ; aGF Selectable
    TCODE   tDiveaGF_active,"aGF!"          ; aGF!
    TCODE   tppO2settings,"Menu ppO2"        ; ppO2 Settings (max. 18 chars)
    TCODE   tsafetystopmenu,"Palier s�curit�:"   ; Safety Stop: (max. 16 chars)

; Display Settings
    TCODE   tBright,    "Luminosit�:"
    TCODE   tEco,       "Eco"
    TCODE   tMedium,    "Moyenne"
    TCODE   tHigh,      "Haute"
    TCODE   tDvSalinity,"Salinit�:"             ; Salinity
    TCODE   tFlip,      "Pivoter l'�cran:"      ; Rotate Screen
    TCODE   tMODwarning,"Alerte MOD:"           ; MOD warning
    TCODE   tShowppO2,  "Afficher ppO2:"        ; Always show ppO2:
    TCODE   tTimeoutDive,"Dive Timeout:"	; Dive Timeout

; VSI display Settings
    TCODE   tVSItext2,  "Vitesse Variable:"     ; Variable speed:
    TCODE   tVSIgraph,  "Graph. Vitesse:"       ; Speed graph:

; Setup Menu
    TCODE   tSystSets,  "R�glages"
    TCODE   tLanguage,  "Langue:"
    TCODE   tEnglish,   "Anglais"
    TCODE   tGerman,    "Allemand"
    TCODE   tFrench,    "Fran�ais"
    TCODE   tItalian,   "Italien"
    TCODE   tCompassMenu,"Calibration Compas"  ; Compass Calibration
    TCODE   tCompassGain,"Sensibilit�:"        ; Compass Gain:

    TCODE   tUnits,     "Unit�s:"
    TCODE   tMetric,     " m/�C"            ; Enum menu
    TCODE   tImperial,   "ft/�F"

    TCODE   tDefName,   "HW OSTC"
	TCODE	tbar,		"bar"				; bar

    TCODE   tButtonleft,"Bouton gauche:"     ; Left button
    TCODE   tButtonright,"Bouton droit:"    ; Right button

; Units for all menu
    TCODE   tMeters,    "m"
	TCODE	tFeets,		"ft"
	TCODE	tFeets1,	"f"
    TCODE   tMinutes,   "'"
    TCODE   tPercent,   "%"
    TCODE   tLitersMinute, "l/min"

; Date
	TCODE	tDateFormat, "Date:"
	TCODE	tDateformat, "MMJJAA"
	TCODE	tDateformat1,"JJMMAA"
	TCODE	tDateformat2,"AAMMJJ"

; Simulator menu
    TCODE   tInter, 	"Start Simulateur"  ; Start Simulator
    TCODE   tPlan,  	"Simulateur"        ; Simulator

; Decoplanner submenu
    TCODE   tBtTm,  	"Temps Fond:"       ; Bot. Time: (10 chars)
    TCODE   tBtTm_short,"Temps:"            ; Bot. Time: (max. 6 chars)
    TCODE   tMxDep, 	"Prof. Max:"        ; Max Depth: (10 chars)
    TCODE   tIntvl, 	"Intervalle:"       ; Interval :  (10 chars)
    TCODE   tDeco,  	"Calcul D�co"       ; Calculate Deco
    TCODE   tDivePlan,  "Runtime:"          ; Dive Plan:
    TCODE   tNoDeco,    "No D�co"           ; No Deco
    TCODE   tMore,      "Suite..."          ; More...
    TCODE   tGasUsage,  "Util. Gaz"         ; Gas Usage
    TCODE   tSetBotUse, "Gaz Fond: "      ; Bottom Gas: (space)
    TCODE   tSetDecoUse,"Gaz D�co: "        ; Deco Gas: (space)


; Information menu
    TCODE   tFirmware,  "Logiciel: "        ; Firmware: (space)
    TCODE   tSerial,    "N. S�rie: "        ; Serial  : (space)
	TCODE	tTotalDives,"Plong�es tot.: "   ; Total Dives: (space)
    TCODE   tBatteryV,  "Batterie: "        ; Battery:
    TCODE   tUptime,	"Uptime: "	    ; Uptime: 

; Divemode screen
    TCODE   tNDL,       "NDL"
    TCODE   tTTS,       "DTR"
	TCODE	tVelMetric,	 "m/min"
	TCODE	tVelImperial,"ft/m "
	TCODE	tGasSelect,  "Activer Gaz"      ; Select Gas
	TCODE	tSelectAir,	 "Air "             ; Air
	TCODE	tSelectO2,	 "O2  "             ; O2
    TCODE   tSelectNx,   "Nx"               ; Nx
    TCODE   tSelectTx,   "Tx"               ; Tx
    TCODE   tDepth,      "Prof."            ; Depth
    TCODE   tMaxDepth,   "Prof. Max."       ; Max. Depth - max 10chars!
    TCODE   tDivetime,   "Dur�e T."         ; Divetime
    TCODE   tDiveHudMask1,   "cell. 1"
    TCODE   tDiveHudMask2,   "cell. 2"
    TCODE   tDiveHudMask3,   "cell. 3"
    TCODE   tDiveTotalAvg,  "Prof. Moy."
    TCODE   tDiveStopwatch, "Chrono"
    TCODE   tDiveStopAvg,   "P.Moy.Chron"   ; 11chars max
    TCODE   tApnoeTotal,    "Totale"        ; Total (Six chars, right alligned)
    TCODE   tApnoeMax,      "Dern.Plong�e"  ; Last Descend
    TCODE   tApnoeSurface,  "Tps.Surface"   ; Surface Time
    TCODE   tDiveDecoplan,  "Runtime"       ; Decoplan
    TCODE   tDiveClock,     "Heure"         ; Clock
    TCODE   tDiveEAD_END,   "EAD/END"       ; EAD/END
    TCODE   tDiveTissues,   "Tissus"        ; Tissues
    TCODE   tEND,           "END:"          ; END:
    TCODE   tHe,            "He"            ; He
    TCODE   tN2,            "N2"            ; N2
    TCODE   tDiveBailout,   "Bailout"       ; Bailout
    TCODE   tGFactors,      "Valeurs GF"    ; GF Values
    TCODE   taGFactors,     "Valeurs aGF"   ; aGF Values
    TCODE   tGFInfo,        "   GF Info"    ; GF Info
    TCODE   tCeiling,       "Ceiling"       ; Ceiling
    TCODE   tDiveSafetyStop,"Stop"         ; Stop (Four chars, right alligned)
    TCODE   tDiveFallback,  "Fallback!"     ; Fallback! (max. nine chars)
    TCODE   tSensorCheck,   "Sensor Check"  ; Sensor Check

; Divemode menu
    TCODE   tDivePreMenu,   "Menu?"         ; Menu?
    TCODE   tSetHeading,    "Cap"           ; Bearing (Max. seven chars)

; Simulator menu
	TCODE	tQuitSim,	 "Fin?"            ; Quit Simulation?

; Logbook
	TCODE	tCNS2,		"SNC:"
	TCODE	tAVG,		"Moy:"
	TCODE	tGF,		"GF:"
	TCODE	tSAT,		"Sat:"					; Sat:

; Logbook units
	TCODE	tLogTunitC,	"�C"	
	TCODE	tLogTunitF,	"�F"
	TCODE	tKGL,		"kg/l"
	TCODE	tMBAR,		"mbar"

; Logbook menu
	TCODE	tNextLog, 	"Page Suivante"
	
; Reset menu
	TCODE	tReboot,	"Red�marrage"            ;Reboot
	TCODE	tResetMenu2,"Confirmer?"       ;Are You Sure?
	TCODE	tAbort,     "Quitter"         ;Abort
	TCODE	tResetSettings, "RaZ Compl�te"  ;Reset All
	TCODE	tResetDeco,	"RaZ D�co"          ;Reset Deco
    TCODE	tResetBattery,	"RaZ Batterie"		;Reset Battery
    TCODE	tResetLogbook,	"RaZ Carnet"		;Reset Logbook

; Set Time Menu/Set Date Menu
	TCODE	tSetHours,	"Ajust. Heures"     ; Set Hours
	TCODE	tSetMinutes,"Ajust. Minutes"    ; Set Minutes
	TCODE	tSetSeconds,"RaZ Secondes"      ; Clear Seconds
	TCODE	tSetDay,	"Ajust. Jours"      ; Set Day
	TCODE	tSetMonth,	"Ajust. Mois"       ; Set Month
	TCODE	tSetYear,	"Ajust. Ann�e"      ; Set Year

; Logbook Offset Menu
	TCODE	tLogOffset,		"Num. 1er plong�e"  ; Logbook offset
	TCODE	tLogOffsetp1,	"+1"				; +1
	TCODE	tLogOffsetp10,	"+10"				; +10
	TCODE	tLogOffsetm1,	"-1"				; -1
	TCODE	tLogOffsetm10,	"-10"				; -10

; Sampling rate
    TCODE   tSamplingrate,  "Fr�q. Mesures:"    ; Sampling rate:
    TCODE   tSampling2s,    "2s"                ; 2s
    TCODE   tSampling10s,   "10s"               ; 10s

; Compass directions
    TCODE   tN,             "N "                ; N(orth),338�-22�
    TCODE   tNE,            "NE"                ; North-East,23�-67�
    TCODE   tE,             "E "                ; E(east),68�-112�
    TCODE   tSE,            "SE"                ; South-East,113�-157�
    TCODE   tS,             "S "                ; S(outh),157�-202�
    TCODE   tSW,            "SO"                ; South-West,203�-247�
    TCODE   tW,             "O "                ; W(West),248�-292�
    TCODE   tNW,            "NO"                ; North-West,293�-337�

; Color Scheme menu
    TCODE   tColorScheme,   "Jeu de Couleurs"   ; Colour scheme
    TCODE   tColorSetDive,  "Mode Plong�e:"     ; Divemode:
    TCODE   tColorSetName0, "Blanc"             ; White
    TCODE   tColorSetName1, "Rouge"             ; Red
    TCODE   tColorSetName2, "Vert"              ; Green
    TCODE   tColorSetName3, "Bleu"              ; Blue

; PSCR Menu and Settings
    TCODE   tPSCRMenu,	    "PSCR Menu"		; PSCR Menu
    TCODE   tPSCR_O2_drop,  "O2 drop:"		; O2 drop
    TCODE   tPSCR_lungratio,"Lung ratio:"	; lung ratio


