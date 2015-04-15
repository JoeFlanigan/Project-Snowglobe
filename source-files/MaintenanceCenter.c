#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => MaintenanceCenter.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => Giving the user couple of windows repair
//                             options, such as "checkdisk" and on...

char maintenanceCenter(char ov_menu_input, bool CHECK, char *ov_uid) {
	do {
		ov_menu_input = mcMenu(ov_menu_input, ov_uid);
		if (ov_menu_input == 't') continue;
		ov_menu_input = mcOp(ov_menu_input, ov_uid);
		ov_menu_input = subMenuRepeat(ov_menu_input, CHECK, ov_uid);
		assert(ov_menu_input != 0);
	} while (ov_menu_input == 'r' && ov_menu_input != 't');

	return (ov_menu_input);
}

void connectionRepair(char *ov_uid) {
	int k, r[8] = { NI, NI, NI, NI, NI, NI, NI, NI }, l;

	do {
		k = 0, l = 0;
		Titles(ov_uid);
		INC(l);
		r[l] = system("ipconfig /release");
		if (r[l] != 0) {
			INC(k);
			bbError(ov_uid);
			continue;
		}
		INC(l);
		Sleep(MDO);
		r[l] = system("ipconfig /renew");
		if (r[l] != 0) {
			INC(k);
			bbError(ov_uid);
			continue;
		}
		INC(l);
		Sleep(MDO);
		r[l] = system("arp -d");
		if (r[l] != 0) {
			INC(k);
			bbError(ov_uid);
			continue;
		}
		INC(l);
		Sleep(MDO);
		r[l] = system("C:\nbtstat -R");
		if (r[l] != 0) {
			INC(k);
			bbError(ov_uid);
			continue;
		}
		INC(l);
		Sleep(MDO);
		r[l] = system("C:\nbtstat -RR");
		if (r[l] != 0) {
			INC(k);
			bbError(ov_uid);
			continue;
		}
		INC(l);
		Sleep(MDO);
		r[l] = system("ipconfig /flushdns");
		if (r[l] != 0) {
			INC(k);
			bbError(ov_uid);
			continue;
		}
		INC(l);
		Sleep(MDO);
		r[l] = system("ipconfig /registerdns");
		if (r[l] != 0) {
			INC(k);
			bbError(ov_uid); // If the console did not have had elevated rights, shout out an error and retry.
			continue;
		}
		if (k == 0) bbSuccess(ov_uid); // Everything went smoothy? Sweet.
	} while (k != 0);
}

void diskRepairScan(char *ov_uid) {
	int k, r[2] = { NI, NI }, l;

	do {
		k = 0, l = 0;
		Titles(ov_uid);
		INC(l);
		system("chkdsk");
		if (r[l] != 0) INC(k);
		else bbSuccess(ov_uid);
	} while (k != 0);
}

void diskRepairOp(char *ov_uid) {
	int k, r[2] = { NI, NI }, l;

	do {
		k = 0, l = 0;
		Titles(ov_uid);
		INC(l);
		system("chkdsk c: /f /r");
		if (r[l] != 0) INC(k);
		else bbSuccess(ov_uid);
	} while (k != 0);
}