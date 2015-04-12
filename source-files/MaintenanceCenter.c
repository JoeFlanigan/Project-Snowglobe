#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => MaintenanceCenter.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => Giving the user couple of windows repair
//                             options, such as "checkdisk"

char MAINTENANCE_CENTER(char ov_menu_input, bool CHECK, char *ov_uid) {

	do {
		ov_menu_input = MAINTENANCE_CENTER_MENU(ov_menu_input, ov_uid);
		if (ov_menu_input == 't') continue;
		ov_menu_input = MAINTENANCE_CENTER_OPERATION(ov_menu_input, ov_uid);
		ov_menu_input = SUB_MENU_REPEAT(ov_menu_input, CHECK, ov_uid);
		assert(ov_menu_input != NULL);
	} while (ov_menu_input == 'r' && ov_menu_input != 't');

	return (ov_menu_input);
}

void CONNECTION_REPAIR(char *ov_uid) {
	int k, r[8] = { NI, NI, NI, NI, NI, NI, NI, NI }, l;

	do {
		k = 0, l = 0;
		TITLES(ov_uid);
		INC(l);
		r[l] = system("ipconfig /release");
		if (r[l] != NULL) INC(k);
		INC(l);
		Sleep(MDO);
		r[l] = system("ipconfig /renew");
		if (r[l] != NULL) INC(k);
		INC(l);
		Sleep(MDO);
		r[l] = system("arp -d");
		if (r[l] != NULL) INC(k);
		INC(l);
		Sleep(MDO);
		r[l] = system("C:\nbtstat -R");
		if (r[l] != NULL) INC(k);
		INC(l);
		Sleep(MDO);
		r[l] = system("C:\nbtstat -RR");
		if (r[l] != NULL) INC(k);
		INC(l);
		Sleep(MDO);
		r[l] = system("ipconfig /flushdns");
		if (r[l] != NULL) INC(k);
		INC(l);
		Sleep(MDO);
		r[l] = system("ipconfig /registerdns");
		if (r[l] != NULL) INC(k);
		if (k == NULL) BB_SUCCESS(ov_uid); // Everything went smoothy? Sweet.
		else if (k != NULL) BB_ERROR(ov_uid);
	} while (k != NULL);
}

void DISK_REPAIR_SCAN(char *ov_uid) {
	int k, r[2] = { NI, NI }, l;

	do {
		k = 0, l = 0;
		TITLES(ov_uid);
		INC(l);
		system("chkdsk");
		if (r[l] != NULL) INC(k);
		else BB_SUCCESS(ov_uid);
	} while (k != NULL);
}

void DISK_REPAIR_OPERATION(char *ov_uid) {
	int k, r[2] = { NI, NI }, l;

	do {
		k = 0, l = 0;
		TITLES(ov_uid);
		INC(l);
		system("chkdsk c: /f /r");
		if (r[l] != NULL) INC(k);
		else BB_SUCCESS(ov_uid);
	} while (k != NULL);
}