#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Input_Ctrl.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => Those functions below, check if the
//                             input from the caller matches what
//                             we want to have. Otherwise output an
//                             error message and go back a step

void MAIN_MENU_INPUT_CTRL(char ov_menu_input, char *ov_uid) {
	if ((ov_menu_input != 'e' && ov_menu_input != 'c')
		&& (ov_menu_input != 'a' && ov_menu_input != 'm')
		&& (ov_menu_input != 't')) BB_ERROR(ov_uid);
}

bool CALCULATOR_INPUT_ROP_CTRL(char c_input_rop, bool CHECK, char *ov_uid) {
	if ((c_input_rop != '+' && c_input_rop != '-')
		&& (c_input_rop != '*' && c_input_rop != '/')
		&& (c_input_rop != '%' && c_input_rop != 's')) {
		BB_ERROR(ov_uid);
		CHECK = TRUE;
	}
	if (CHECK != FALSE) TITLES(ov_uid);

	return (CHECK);
}

bool CALCULATOR_INPUT_CTRL(unsigned int c_input, bool CHECK, char *ov_uid, int r) {
	if ((c_input > CLM || c_input < CLN)
		|| (r != 1)) {
		BB_ERROR(ov_uid);
		CHECK = TRUE;
	}
	if (CHECK != FALSE) TITLES(ov_uid);

	return (CHECK);
}

bool ATM_INPUT_CTRL(float atm_input, bool CHECK, char *ov_uid, int r) {
	if ((atm_input > ALM || atm_input < ALN)
		|| (r != 1)) {
		BB_ERROR(ov_uid);
		CHECK = TRUE;
	}
	if (CHECK != FALSE) TITLES(ov_uid);

	return (CHECK);
}

void MAINTENANCE_CENTER_MENU_INPUT_CTRL(char ov_menu_input, char *ov_uid) {
	if ((ov_menu_input != 'e' && ov_menu_input != 'r')
		&& (ov_menu_input != 'c' && ov_menu_input != 'a')
		&& (ov_menu_input != 't')) BB_ERROR(ov_uid);
}

bool SUB_MENU_REPEAT_CTRL(char ov_menu_input, bool CHECK, char *ov_uid) {
	if ((ov_menu_input != 'e' && ov_menu_input != 'r')
		&& (ov_menu_input != 't')) {
		BB_ERROR(ov_uid);
		CHECK = TRUE;
	}
	if (CHECK != FALSE) TITLES(ov_uid);

	return (CHECK);
}

void CELSIUS_FAHRENHEIT_MISCTOOL_MENU_CTRL(char ov_menu_input, char *ov_uid) {
	if ((ov_menu_input != 'e' && ov_menu_input != 't')
		&& (ov_menu_input != 'c' && ov_menu_input != 'f')) BB_ERROR(ov_uid);
}

void MISCTOOLS_MENU_CTRL(char ov_menu_input, char *ov_uid) {
	if ((ov_menu_input != 'e' && ov_menu_input != 't')
		&& (ov_menu_input != 'p' && ov_menu_input != 'm')
		&& (ov_menu_input != 'r' && ov_menu_input != 'a')) BB_ERROR(ov_uid);
}

void MISCTOOLS_CTRL(char ov_menu_input, char *ov_uid) {
	if (ov_menu_input != 'r' && ov_menu_input != 't') BB_ERROR(ov_uid);
}