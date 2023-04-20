
#include <open.mp>
#define _INC_TAG
//#define _INC_SKROT

#include <pl>

glowny()
{
    print("include dla spo�eczno�ci");

    nowy id = 1;
    jesli(id == 1)
    {
        printf("test if %d", id);
    }
}

publiczny uruchamianie_trybugry()
{
	SetGameModeText("My first open.mp gamemode!");
	dodaj_klase_gracza(0, 2495.3547, -1688.2319, 13.6774, 351.1646, BRON_M4, 500, BRON_NOZ, 1, BRON_ORZEL, 100);
	AddStaticVehicle(522, 2493.7583, -1683.6482, 12.9099, 270.8069, -1, -1);
	zwroc prawda;
}

publiczny wylaczenie_trybugry()
{
	zwroc prawda;
}


publiczny polaczenie_gracza(idgracza)
{
    SendClientMessage(idgracza, -1, "witaj na te�cie polskim kodowaniu");
	zwroc prawda;
}

publiczny rozlaczenie_gracza(idgracza, powod)
{
	zwroc prawda;
}

publiczny klasa_na_zyczenie_gracza(idgracza, idklasy)
{
	SetPlayerPos(idgracza, 217.8511, -98.4865, 1005.2578);
	SetPlayerFacingAngle(idgracza, 113.8861);
	SetPlayerInterior(idgracza, 15);
	SetPlayerCameraPos(idgracza, 215.2182, -99.5546, 1006.4);
	SetPlayerCameraLookAt(idgracza, 217.8511, -98.4865, 1005.2578);
	ApplyAnimation(idgracza, "benchpress", "gym_bp_celebrate", 4.1, true, false, false, false, 0, SYNC_NONE);
	zwroc prawda;
}

publiczny przy_odrodzeniu_gracza(idgracza)
{
	SetPlayerInterior(idgracza, 0);
	zwroc prawda;
}

publiczny przy_smierci_gracza(idgracza, idzabojcy, powod)
{
	zwroc prawda;
}

publiczny wejscie_pojazdu(idgracza, idpojazdu, jest_pasazerem)
{
	zwroc prawda;
}

publiczny wyjscie_pojazdu(idgracza, idpojazdu)
{
	zwroc prawda;
}

publiczny przy_odradzaniu_pojazdu(idpojazdu)
{
	zwroc prawda;
}

publiczny przy_smierci_pojazdu(idpojazdu, idzabojcy)
{
	zwroc prawda;
}

publiczny OnPlayerRequestSpawn(idgracza)
{
	zwroc prawda;
}
publiczny OnPlayerCommandText(idgracza, cmdtext[])
{
	zwroc falsz;
}

publiczny OnPlayerText(idgracza, text[])
{
	zwroc prawda;
}
publiczny OnPlayerUpdate(idgracza)
{
	zwroc prawda;
}

publiczny OnPlayerKeyStateChange(idgracza, klucz:newkeys, klucz:oldkeys)
{
	zwroc prawda;
}

publiczny OnPlayerStateChange(idgracza, stan_gracza:newstate, stan_gracza:oldstate)
{
	zwroc prawda;
}

publiczny OnPlayerEnterCheckpoint(idgracza)
{
	zwroc prawda;
}

publiczny OnPlayerLeaveCheckpoint(idgracza)
{
	zwroc prawda;
}

publiczny OnPlayerEnterRaceCheckpoint(idgracza)
{
	zwroc prawda;
}

publiczny OnPlayerLeaveRaceCheckpoint(idgracza)
{
	zwroc prawda;
}

publiczny OnPlayerGiveDamageActor(idgracza, damaged_actorid, Float:amount, weaponid, bodypart)
{
	zwroc prawda;
}

publiczny OnActorStreamIn(actorid, forplayerid)
{
	zwroc prawda;
}

publiczny OnActorStreamOut(actorid, forplayerid)
{
	zwroc prawda;
}

publiczny OnDialogResponse(idgracza, dialogid, response, listitem, inputtext[])
{
	zwroc prawda;
}

publiczny OnPlayerEnterGangZone(idgracza, zoneid)
{
	zwroc prawda;
}

publiczny OnPlayerLeaveGangZone(idgracza, zoneid)
{
	zwroc prawda;
}

publiczny OnPlayerEnterPlayerGangZone(idgracza, zoneid)
{
	zwroc prawda;
}

publiczny OnPlayerLeavePlayerGangZone(idgracza, zoneid)
{
	zwroc prawda;
}

publiczny OnPlayerClickGangZone(idgracza, zoneid)
{
	zwroc prawda;
}

publiczny OnPlayerClickPlayerGangZone(idgracza, zoneid)
{
	zwroc prawda;
}

publiczny OnPlayerSelectedMenuRow(idgracza, row)
{
	zwroc prawda;
}

publiczny OnPlayerExitedMenu(idgracza)
{
	zwroc prawda;
}

publiczny OnClientCheckResponse(idgracza, actionid, memaddr, retndata)
{
	zwroc prawda;
}

publiczny OnRconLoginAttempt(ip[], password[], success)
{
	zwroc prawda;
}

publiczny OnPlayerFinishedDownloading(idgracza, virtualworld)
{
	zwroc prawda;
}

publiczny OnPlayerRequestDownload(idgracza, DOWNLOAD_REQUEST:type, crc)
{
	zwroc prawda;
}

publiczny OnRconCommand(cmd[])
{
	zwroc falsz;
}

publiczny OnPlayerSelectObject(idgracza, wybierz_obiekt:type, objectid, modelid, pozycja:fX, pozycja:fY, pozycja:fZ)
{
	zwroc prawda;
}

publiczny OnPlayerEditObject(idgracza, playerobject, objectid, edytuj_odpowiedz:response, pozycja:fX, pozycja:fY, pozycja:fZ, pozycja:rotationX, pozycja:rotationY, pozycja:rotationZ)
{
	zwroc prawda;
}

publiczny OnPlayerEditAttachedObject(idgracza, edytuj_odpowiedz:response, index, modelid, boneid, pozycja:fOffsetX, pozycja:fOffsetY, pozycja:fOffsetZ, pozycja:rotationX, pozycja:rotationY, pozycja:rotationZ, pozycja:scaleX, pozycja:scaleY, pozycja:scaleZ)
{
	zwroc prawda;
}

publiczny OnObjectMoved(objectid)
{
	zwroc prawda;
}

publiczny OnPlayerObjectMoved(idgracza, objectid)
{
	zwroc prawda;
}

publiczny OnPlayerPickUpPickup(idgracza, pickupid)
{
	zwroc prawda;
}

publiczny OnPlayerPickUpPlayerPickup(idgracza, pickupid)
{
	zwroc prawda;
}

publiczny OnPickupStreamIn(pickupid, idgracza)
{
	zwroc prawda;
}

publiczny OnPickupStreamOut(pickupid, idgracza)
{
	zwroc prawda;
}

publiczny OnPlayerPickupStreamIn(pickupid, idgracza)
{
	zwroc prawda;
}

publiczny OnPlayerPickupStreamOut(pickupid, idgracza)
{
	zwroc prawda;
}

publiczny OnPlayerStreamIn(idgracza, forplayerid)
{
	zwroc prawda;
}

publiczny OnPlayerStreamOut(idgracza, forplayerid)
{
	zwroc prawda;
}

publiczny otrzymanie_obrazen_przez_gracza(idgracza, issuerid, pozycja:amount, weaponid, bodypart)
{
    if(issuerid != NIEPRAWIDLOWE_ID_GRACZA) // If not self-inflicted
    {
        nowy
            infoString[128],
            weaponName[24],
            victimName[MAX_PLAYER_NAME],
            attackerName[MAX_PLAYER_NAME];

        GetPlayerName(playerid, victimName, sizeof (victimName));
        GetPlayerName(issuerid, attackerName, sizeof (attackerName));

        GetWeaponName(WEAPON:weaponid, weaponName, sizeof (weaponName));

        format(infoString, sizeof(infoString), "%s has made %.0f damage to %s, weapon: %s, bodypart: %d", attackerName, amount, victimName, weaponName, bodypart);
        SendClientMessageToAll(-1, infoString);
    }
	zwroc prawda;
}


publiczny OnPlayerGiveDamage(idgracza, damagedid, pozycja:amount, weaponid, bodypart)
{
	zwroc prawda;
}

publiczny OnPlayerClickPlayer(idgracza, clickedplayerid, klinij_zrodlo:source)
{
	zwroc prawda;
}

publiczny OnPlayerWeaponShot(idgracza, weaponid, rodzaj_uderzenia_kula:hittype, hitid, pozycja:fX, pozycja:fY, pozycja:fZ)
{
	zwroc prawda;
}

publiczny OnScriptCash(idgracza, amount, source)
{
	zwroc prawda;
}

publiczny OnPlayerClickMap(idgracza, pozycja:fX, pozycja:fY, pozycja:fZ)
{
	SetPlayerPosFindZ(idgracza, fX, fY, fZ);
	zwroc prawda;
}

publiczny OnIncomingConnection(idgracza, ip_address[], port)
{
	zwroc prawda;
}

publiczny OnPlayerInteriorChange(idgracza, newinteriorid, oldinteriorid)
{
	zwroc prawda;
}

publiczny OnPlayerClickTextDraw(idgracza, Text:clickedid)
{
	zwroc prawda;
}

publiczny OnPlayerClickPlayerTextDraw(idgracza, PlayerText:playertextid)
{
	zwroc prawda;
}

publiczny OnTrailerUpdate(idgracza, vehicleid)
{
	zwroc prawda;
}

publiczny OnVehicleSirenStateChange(idgracza, vehicleid, newstate)
{
	zwroc prawda;
}

publiczny OnVehicleStreamIn(vehicleid, forplayerid)
{
	zwroc prawda;
}

publiczny OnVehicleStreamOut(vehicleid, forplayerid)
{
	zwroc prawda;
}

publiczny OnVehicleMod(idgracza, vehicleid, component)
{
	zwroc prawda;
}

publiczny OnEnterExitModShop(idgracza, enterexit, interiorid)
{
	zwroc prawda;
}

publiczny OnVehiclePaintjob(idgracza, vehicleid, paintjob)
{
	zwroc prawda;
}

publiczny OnVehicleRespray(idgracza, vehicleid, colour1, colour2)
{
	zwroc prawda;
}

publiczny OnVehicleDamageStatusUpdate(vehicleid, idgracza)
{
	zwroc prawda;
}

publiczny OnUnoccupiedVehicleUpdate(vehicleid, idgracza, passenger_seat, pozycja:new_x, pozycja:new_y, pozycja:new_z, pozycja:vel_x, pozycja:vel_y, pozycja:vel_z)
{
	zwroc prawda;
}