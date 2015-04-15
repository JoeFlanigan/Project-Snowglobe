#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Operation.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => The main operation(s) of this tool

char primaryOp(char ov_menu_input, bool CHECK, char *ov_uid) {
	switch (ov_menu_input) {
	case 'a': ov_menu_input = atmMachine(ov_menu_input, CHECK, ov_uid); break;
	case 'e': stdExit(ov_uid); break;
	case 'c': ov_menu_input = calc(ov_menu_input, CHECK, ov_uid); break;
	case 'm': ov_menu_input = maintenanceCenter(ov_menu_input, CHECK, ov_uid); break;
	case 't': ov_menu_input = miscToolsMenu(ov_menu_input, CHECK, ov_uid); break;
	}

	return (ov_menu_input);
}

char mcOp(char ov_menu_input, char *ov_uid) {
	switch (ov_menu_input) {
	case 'e': stdExit(ov_uid); break;
	case 'r': connectionRepair(ov_uid); break;
	case 'c': diskRepairScan(ov_uid); break;
	case 'a': diskRepairOp(ov_uid); break;
	}

	return (ov_menu_input);
}

char miscToolsOp(char ov_menu_input, char *ov_uid, bool CHECK) {
	switch (ov_menu_input) {
	case 'e': stdExit(ov_uid); break;
	case 'p': ov_menu_input = celfahMiscTool(ov_menu_input, CHECK, ov_uid); break;
	case 'm': ov_menu_input = multiplicationTable(ov_uid, ov_menu_input); break;
	case 'r': ov_menu_input = repeatMe(ov_menu_input, ov_uid); break;
	case 'a': ov_menu_input = markAverageSum(ov_menu_input, ov_uid); break;
	}

	return (ov_menu_input);
}