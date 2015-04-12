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

void MAIN_MENU_INPUT_CTRL(char ov_menu_input) {
	if ((ov_menu_input != 'e' && ov_menu_input != 'c')
		&& (ov_menu_input != 'a' && ov_menu_input != 'm')) BB_ERROR();
}

bool CALCULATOR_INPUT_ROP_CTRL(char c_input_rop, bool CHECK) {
	if ((c_input_rop != '+' && c_input_rop != '-')
		&& (c_input_rop != '*' && c_input_rop != '/')
		&& (c_input_rop != '%' && c_input_rop != 's')) {
		BB_ERROR();
		CHECK = TRUE;
	}
	if (CHECK != FALSE) TITLES();

	return (CHECK);
}

bool CALCULATOR_INPUT_CTRL(unsigned int c_input, bool CHECK) {
	if (c_input > CLM || c_input < CLN) {
		BB_ERROR();
		CHECK = TRUE;
	}
	if (CHECK != FALSE) TITLES();

	return (CHECK);
}

bool ATM_INPUT_CTRL(float atm_input, bool CHECK) {
	if (atm_input > ALM || atm_input < ALN) {
		BB_ERROR();
		CHECK = TRUE;
	}
	if (CHECK != FALSE) TITLES();

	return (CHECK);
}

void MAINTENANCE_CENTER_MENU_INPUT_CTRL(char ov_menu_input) {
	if ((ov_menu_input != 'e' && ov_menu_input != 'r')
		&& (ov_menu_input != 'c' && ov_menu_input != 'a')
		&& (ov_menu_input != 't')) BB_ERROR();
}

bool SUB_MENU_REPEAT_CTRL(char ov_menu_input, bool CHECK) {
	if ((ov_menu_input != 'e' && ov_menu_input != 'r')
		&& (ov_menu_input != 't')) {
		BB_ERROR();
		CHECK = TRUE;
	}
	if (CHECK != FALSE) TITLES();

	return (CHECK);
}

void CELSIUS_FAHRENHEIT_MISCTOOL_MENU_CTRL(char ov_menu_input) {
	if ((ov_menu_input != 'e' && ov_menu_input != 't')
		&& (ov_menu_input != 'c' && ov_menu_input != 'f')) BB_ERROR();
}
