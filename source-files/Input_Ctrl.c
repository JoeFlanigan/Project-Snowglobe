#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Input_Ctrl.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => Those functions below, will check if the
//                             input from the caller' is matching with what
//                             we want to have. Otherwise output an
//                             error message and go back a step

void mmInputCtrl(char ov_menu_input, char *ov_uid) {
	if ((ov_menu_input != 'e' && ov_menu_input != 'c')
		&& (ov_menu_input != 'a' && ov_menu_input != 'm')
		&& (ov_menu_input != 't')) bbError(ov_uid);
}

bool calcInputRopCtrl(char c_input_rop, bool CHECK, char *ov_uid) {
	if ((c_input_rop != '+' && c_input_rop != '-')
		&& (c_input_rop != '*' && c_input_rop != '/')
		&& (c_input_rop != '%' && c_input_rop != 's')) {
		bbError(ov_uid);
		CHECK = TRUE;
	}
	if (CHECK != FALSE) Titles(ov_uid);

	return (CHECK);
}

bool calcInputCtrl(unsigned int c_input, bool CHECK, char *ov_uid, int r) {
	if ((c_input > CLM || c_input < CLN)
		|| (r != 1)) {
		bbError(ov_uid);
		CHECK = TRUE;
	}
	if (CHECK != FALSE) Titles(ov_uid);

	return (CHECK);
}

bool atmInputCtrl(float atm_input, bool CHECK, char *ov_uid, int r) {
	if ((atm_input > ALM || atm_input < ALN)
		|| (r != 1)) {
		bbError(ov_uid);
		CHECK = TRUE;
	}
	if (CHECK != FALSE) Titles(ov_uid);

	return (CHECK);
}

void mcmInputCtrl(char ov_menu_input, char *ov_uid) {
	if ((ov_menu_input != 'e' && ov_menu_input != 'r')
		&& (ov_menu_input != 'c' && ov_menu_input != 'a')
		&& (ov_menu_input != 't')) bbError(ov_uid);
}

bool subRepeatCtrl(char ov_menu_input, bool CHECK, char *ov_uid) {
	if ((ov_menu_input != 'e' && ov_menu_input != 'r')
		&& (ov_menu_input != 't')) {
		bbError(ov_uid);
		CHECK = TRUE;
	}
	if (CHECK != FALSE) Titles(ov_uid);

	return (CHECK);
}

void cfMiscToolsCtrl(char ov_menu_input, char *ov_uid) {
	if ((ov_menu_input != 'e' && ov_menu_input != 't')
		&& (ov_menu_input != 'c' && ov_menu_input != 'f')) bbError(ov_uid);
}

void miscToolsMenuCtrl(char ov_menu_input, char *ov_uid) {
	if ((ov_menu_input != 'e' && ov_menu_input != 't')
		&& (ov_menu_input != 'p' && ov_menu_input != 'm')
		&& (ov_menu_input != 'r' && ov_menu_input != 'a')) bbError(ov_uid);
}

void miscToolsCtrl(char ov_menu_input, char *ov_uid) {
	if (ov_menu_input != 'r' && ov_menu_input != 't') bbError(ov_uid);
}