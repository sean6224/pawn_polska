/*
    INCLUDE zosta� stworzony dla spo�eczno�ci polskiej.
    Wersja: 0.0.1
    Autor: azzy
    GitHub: https://github.com/sean6224/pawn_polska
    
    Zasada dzia�ania include:
        Zasada jest prosta zmienia sk�adnie z j�zyka angielskiego na polsk�.
*/


/*
    _INC_TAG - je�li chcesz u�ywa� tag�w to ustaw w swoim trybie gry przed #include <pl> tak ma wygl�da�:
    #define _INC_TAG
    #include <pl>
*/
#if defined _INC_TAG
    //
    #define wstepny forward
    #define publiczny public

    #define nowy new
    #define jesli if

    #define w_przeciwnym_razie else
    
    #define zwroc return
    #define prawda true
    #define falsz false

    #define pozycja: Float:

    #define klucz: KEY:
    #define noweklucze newkeys
    #define stareklucze oldkeys

    #define stan_gracza: PLAYER_STATE:
    #define wybierz_obiekt: SELECT_OBJECT:
    #define edytuj_odpowiedz: EDIT_RESPONSE:
    #define klinij_zrodlo: CLICK_SOURCE:
    #define rodzaj_uderzenia_kula: BULLET_HIT_TYPE:
    #define plik: File

    #define dla_idgracza forplayerid

    //parametry funkcji
    #define idgracza playerid
    #define powod reason
    #define idklasy classid
    #define idzabojcy killerid
    #define idpojazdu vehicleid
    #define jest_pasazerem ispassenger


    #define wydrukujf printf

    #define NIEPRAWIDLOWE_ID_GRACZA INVALID_PLAYER_ID

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
    #define uruchamianie_trybugry OnPlayerRequestSpawn
    #define uruchamianie_trybugry OnPlayerCommandText
    #define uruchamianie_trybugry OnPlayerText
    #define uruchamianie_trybugry OnPlayerUpdate
    #define uruchamianie_trybugry OnPlayerKeyStateChange
    #define uruchamianie_trybugry OnPlayerStateChange
    #define uruchamianie_trybugry OnPlayerEnterCheckpoint
    #define uruchamianie_trybugry OnPlayerLeaveCheckpoint
    #define uruchamianie_trybugry OnPlayerEnterRaceCheckpoint
    #define uruchamianie_trybugry OnPlayerLeaveRaceCheckpoint
   
    #define uruchamianie_trybugry OnPlayerGiveDamageActor
    #define uruchamianie_trybugry OnActorStreamIn
    #define uruchamianie_trybugry OnActorStreamOut
    #define uruchamianie_trybugry OnDialogResponse
    #define uruchamianie_trybugry OnPlayerEnterGangZone
    #define uruchamianie_trybugry OnPlayerLeaveGangZone
    #define uruchamianie_trybugry OnPlayerEnterPlayerGangZone
    #define uruchamianie_trybugry OnPlayerLeavePlayerGangZone
    #define uruchamianie_trybugry OnPlayerClickGangZone
    #define uruchamianie_trybugry OnPlayerClickPlayerGangZone
    #define uruchamianie_trybugry OnPlayerSelectedMenuRow
    #define uruchamianie_trybugry OnPlayerExitedMenu
    #define uruchamianie_trybugry OnClientCheckResponse
    #define uruchamianie_trybugry OnRconLoginAttempt
    #define uruchamianie_trybugry OnPlayerFinishedDownloading
    #define uruchamianie_trybugry OnPlayerRequestDownload
    #define uruchamianie_trybugry OnRconCommand
    #define uruchamianie_trybugry OnPlayerSelectObject
    #define uruchamianie_trybugry OnPlayerEditObject
    #define uruchamianie_trybugry OnPlayerEditAttachedObject
    #define uruchamianie_trybugry OnObjectMoved
    #define uruchamianie_trybugry OnPlayerObjectMoved
    #define uruchamianie_trybugry OnPlayerPickUpPickup
    #define uruchamianie_trybugry OnPlayerPickUpPlayerPickup
    #define uruchamianie_trybugry OnPickupStreamIn
    #define uruchamianie_trybugry OnPickupStreamOut
    #define uruchamianie_trybugry OnPlayerPickupStreamIn
    #define uruchamianie_trybugry OnPlayerPickupStreamOut
    #define uruchamianie_trybugry OnPlayerStreamIn

    #define uruchamianie_trybugry OnPlayerStreamOut
*/
    #define otrzymanie_obrazen_przez_gracza OnPlayerTakeDamage
    /*
    #define uruchamianie_trybugry OnPlayerGiveDamage
    #define uruchamianie_trybugry OnPlayerClickPlayer
    #define uruchamianie_trybugry OnPlayerWeaponShot
    #define uruchamianie_trybugry OnScriptCash
    #define uruchamianie_trybugry OnPlayerClickMap
    #define uruchamianie_trybugry OnIncomingConnection
    #define uruchamianie_trybugry OnPlayerInteriorChange
    #define uruchamianie_trybugry OnPlayerClickTextDraw
    #define uruchamianie_trybugry OnPlayerClickPlayerTextDraw
    #define uruchamianie_trybugry OnTrailerUpdate
    #define uruchamianie_trybugry OnVehicleSirenStateChange
    #define uruchamianie_trybugry OnVehicleStreamIn
    #define uruchamianie_trybugry OnVehicleStreamOut
    #define uruchamianie_trybugry OnVehicleMod
    #define uruchamianie_trybugry OnEnterExitModShop
    #define uruchamianie_trybugry OnVehiclePaintjob
    #define uruchamianie_trybugry OnVehicleRespray
    #define uruchamianie_trybugry OnVehicleDamageStatusUpdate
    #define uruchamianie_trybugry OnUnoccupiedVehicleUpdate

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
    //------------------------------------------------------------------------------
#endif
