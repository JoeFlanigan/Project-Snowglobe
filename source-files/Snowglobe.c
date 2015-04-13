#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Snowglobe.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//     Project Output Lang  => "English"
//                            
//     File Description	    => "PJ; Snowglobe is my lil' Sandbox"

void SNOWGLOBE(void) { 
	char ov_menu_input = NI, *cck = NULL, *ov_uid = NI;
	bool CHECK = NI;

	//ov_uid = SG_AUTH_SYS(CHECK);
	//ShinyIntro();

	do {
		BOOL_CHECK(ov_uid);
		ov_menu_input = MAIN_MENU(ov_menu_input, ov_uid);
		ov_menu_input = MAIN_OPERATION(ov_menu_input, CHECK, ov_uid);
	} while (ov_menu_input == 't');
}

