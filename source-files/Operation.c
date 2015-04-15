#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Operation.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => The main operation(s) of this tool
//                             also from ATM.c/CALC.c on and on..

char MAIN_OPERATION(char ov_menu_input, bool CHECK, char *ov_uid) {
	switch (ov_menu_input) {
	case 'a': ov_menu_input = ATM(ov_menu_input, CHECK, ov_uid); break;
	case 'e': STD_EXIT(ov_uid); break;
	case 'c': ov_menu_input = CALCULATOR(ov_menu_input, CHECK, ov_uid); break;
	case 'm': ov_menu_input = MAINTENANCE_CENTER(ov_menu_input, CHECK, ov_uid); break;
	case 't': ov_menu_input = MISCTOOLS_MENU(ov_menu_input, CHECK, ov_uid); break;
	}

	return (ov_menu_input);
}

char MAINTENANCE_CENTER_OPERATION(char ov_menu_input, char *ov_uid) {
	switch (ov_menu_input) {
	case 'e': STD_EXIT(ov_uid); break;
	case 'r': CONNECTION_REPAIR(ov_uid); break;
	case 'c': DISK_REPAIR_SCAN(ov_uid); break;
	case 'a': DISK_REPAIR_OPERATION(ov_uid); break;
	}

	return (ov_menu_input);
}

char MISCTOOLS_OPERATION(char ov_menu_input, char *ov_uid, bool CHECK) {
	switch (ov_menu_input) {
	case 'e': STD_EXIT(ov_uid); break;
	case 'p': ov_menu_input = CELSIUS_FAHRENHEIT_MISCTOOL(ov_menu_input, CHECK, ov_uid); break;
	case 'm': ov_menu_input = MULTIPLICATION_TABLE_M(ov_uid, ov_menu_input); break;
	case 'r': ov_menu_input = REPEAT_MY_STRING(ov_menu_input, ov_uid); break;
	case 'a': ov_menu_input = MARK_AVERAGE_SUM(ov_menu_input, ov_uid); break;
	}

	return (ov_menu_input);
}