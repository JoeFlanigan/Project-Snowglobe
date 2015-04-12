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
	char ov_menu_input = NI, *cck = NULL;
	bool CHECK = NI;

	ShinyIntro();

	do {
		BOOL_CHECK();
		ov_menu_input = MAIN_MENU(ov_menu_input);
		ov_menu_input = MAIN_OPERATION(ov_menu_input, CHECK);
	} while (ov_menu_input == 't');
}
