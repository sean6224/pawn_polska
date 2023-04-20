/*
    INCLUDE zosta³ stworzony dla spo³ecznoœci polskiej.
    Wersja: 0.0.1
    Autor: azzy
    GitHub: NULL
    
    Zasada dzia³ania include:
        Zasada jest prosta zmienia sk³adnie z jêzyka angielskiego na polsk¹.
*/


/*
    _INC_TAG - jeœli chcesz u¿ywaæ tagów to ustaw w swoim trybie gry przed #include <pl> tak ma wygl¹daæ:
    #define _INC_TAG
    #include <pl>
*/
#if defined _INC_TAG
    //
    #define wstepny forward
    #define publiczny public

    #define nowy new
    #define jesli if
    #define zwroc return
    #define prawda true
    #define falsz false

    #define pozycja: Float
    #define plik: File

    //parametry funkcji
    #define idgracza playerid
    #define powod reason
    #define idklasy classid
    #define idzabojcy killerid
    #define idpojazdu vehicleid
    #define jest_pasazerem ispassenger

    //public main_scripts
    #define glowny main
    #define uruchamianie_trybugry OnGameModeInit
    #define wylaczenie_trybugry OnGameModeExit

    //public side_scripts
    #define uruchamianie_skryptu OnFilterScriptInit
    #define wylaczenie_skryptu OnFilterScriptExit


    #define polaczenie_gracza OnPlayerConnect
    #define rozlaczenie_gracza OnPlayerDisconnect
    #define klasa_na_zyczenie_gracza OnPlayerRequestClass
    #define przy_odrodzeniu_gracza OnPlayerSpawn
    #define przy_smierci_gracza OnPlayerDeath
    #define wejscie_pojazdu OnPlayerEnterVehicle
    #define wyjscie_pojazdu OnPlayerExitVehicle
    #define przy_odradzaniu_pojazdu OnVehicleSpawn
    #define przy_smierci_pojazdu OnVehicleDeath

    /*
    #define uruchamianie_trybugry() OnGameModeInit()
    #define uruchamianie_trybugry() OnGameModeInit()
    #define uruchamianie_trybugry() OnGameModeInit()
    #define uruchamianie_trybugry() OnGameModeInit()
    #define uruchamianie_trybugry() OnGameModeInit()
    #define uruchamianie_trybugry() OnGameModeInit()
    #define uruchamianie_trybugry() OnGameModeInit()
    #define uruchamianie_trybugry() OnGameModeInit()
    #define uruchamianie_trybugry() OnGameModeInit()
    #define uruchamianie_trybugry() OnGameModeInit()
    #define uruchamianie_trybugry() OnGameModeInit()
    */





    //bronie tag
    #define BRON_NIEZNANA WEAPON_UNKNOWN
    #define BRON_PIESC WEAPON_FIST
    #define BRON_KASTET WEAPON_BRASSKNUCKLE
    #define BRON_GOLF WEAPON_GOLFCLUB
    #define BRON_PALKAPOLICYJNA WEAPON_NITESTICK
    #define BRON_PALKAPOLICYJNA2 WEAPON_NIGHTSTICK
    #define BRON_NOZ WEAPON_KNIFE
    #define BRON_PALKA WEAPON_BAT
    #define BRON_LOPATA WEAPON_SHOVEL
    #define BRON_KIJB WEAPON_POOLSTICK
    #define BRON_KATANA WEAPON_KATANA
    #define BRON_PILA WEAPON_CHAINSAW
    #define BRON_DILDO WEAPON_DILDO
    #define BRON_DILDO2 WEAPON_DILDO2
    #define BRON_WIBRATOR WEAPON_VIBRATOR
    #define BRON_WIBRATOR2 WEAPON_VIBRATOR2
    #define BRON_KWIATY WEAPON_FLOWER
    #define BRON_LASKA WEAPON_CANE
    #define BRON_GRANAT WEAPON_GRENADE
    #define BRON_GAS WEAPON_TEARGAS
    #define BRON_KOKTAJL WEAPON_MOLTOV
    #define BRON_KOKTAJL2 WEAPON_MOLOTOV
    #define BRON_PISTOLET WEAPON_COLT45
    #define BRON_PISTOLETZTLUMNIKIEM WEAPON_SILENCED
    #define BRON_ORZEL WEAPON_DEAGLE
    #define BRON_STRZELBA WEAPON_SHOTGUN
    #define BRON_M4 WEAPON_SAWEDOFF
    #define BRON_STRZELBA_BOJOWA WEAPON_SHOTGSPA
    #define BRON_UZI WEAPON_UZI
    #define BRON_MP5 WEAPON_MP5
    #define BRON_AK47 WEAPON_AK47
    #define BRON_M4 WEAPON_M4
    #define BRON_TEC9 WEAPON_TEC9
    #define BRON_KARABIN_WIEJSKI WEAPON_RIFLE
    #define BRON_KARABIN_SNAJPERSKI WEAPON_SNIPER
    #define BRON_RPG WEAPON_ROCKETLAUNCHER
    #define BRON_RAKIETOWNICA_HS WEAPON_HEATSEEKER
    #define BRON_MIOTACZ WEAPON_FLAMETHROWER
    #define BRON_MINIGUN WEAPON_MINIGUN
    #define BRON_TORBA WEAPON_SATCHEL
    #define BRON_DETONATOR WEAPON_BOMB
    #define BRON_SPREJ WEAPON_SPRAYCAN
    #define BRON_GASNICA WEAPON_FIREEXTINGUISHER
    #define BRON_KAMERA WEAPON_CAMERA
    #define BRON_NOKTOWIZOR WEAPON_NIGHT_VISION_GOGGLES
    #define BRON_TERMICZNY WEAPON_THERMAL_GOGGLES
    #define BRON_SPADOCHRON WEAPON_PARACHUTE
    #define BRON_SAMOCHOD WEAPON_VEHICLE
    #define BRON_UTANOL WEAPON_DROWN
    #define BRON_KOLIZCJA WEAPON_COLLISION
    #define BRON_KOLIZCJA2 WEAPON_SPLAT
#endif

#if defined _INC_SKROT
    //------------------------------------------------------------------------------
    /*                              -= A =-                                         */
    //#define Dodaj_klase_gracza        		AddPlayerClass
    //------------------------------------------------------------------------------
#else
     //------------------------------------------------------------------------------
    /*                              -= A =-                                         */
	#define dodaj_element_menu     		AddMenuItem
    #define dodaj_klase_gracza        		AddPlayerClass
    #define dodaj_klase_graczaex          	AddPlayerClassEx
    #define dodaj_pickup_statyczny           	AddStaticPickup
    #define dodaj_pojazd_statyczny         	AddStaticVehicle
    #define dodaj_komponent_pojazdu      	AddVehicleComponent
    #define zezwol_tp_admin    	AllowAdminTeleport
    #define zezwol_tp_player    	AllowPlayerTeleport
    #define zezwol_bron_interior        	AllowInteriorWeapons
    
    #define dolacz_3dnapisdo_gracza			Attach3DTextLabelToPlayer
    #define dolacz_3dnapisdo_pojazdu       	Attach3DTextLabelToVehicle
    #define dolacz_kameredo_obiektu      	AttachCameraToObject
    #define dolacz_kameredo_akasoria	AttachCameraToPlayerObject
    #define fd           AttachObjectToObject
    #define UnirObjetoAJugador          AttachObjectToPlayer
    #define fd           	AttachObjectToVehicle
    #define fd	AttachPlayerObjectToPlayer
    #define fd		AttachPlayerObjectToVehicle
    #define fd           AttachTrailerToVehicle	
    //------------------------------------------------------------------------------
#endif
