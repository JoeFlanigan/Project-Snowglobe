#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => UI.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => Interface(s)/Menu(s) for PJ; Snowglobe

const static char gl_get_prjct_menuspace[] = "----------------------------------------";

char MAIN_MENU(char ov_menu_input, char *ov_uid) {
	do {
		TITLES(ov_uid);
		printf("	Welcome in the main menu. Below you will find some\n");
		printf("	options/tools that you can choose from now.\n\n");
		printf("	     %s\n", gl_get_prjct_menuspace);
		printf("	     Option <=> E <=>	        Exit the tool\n");
		printf("	     Option <=> A <=>	          ATM machine\n");
		printf("	     Option <=> C <=>	           Calculator\n");
		printf("	     Option <=> M <=>	   Maintenance Center\n");
		printf("	     Option <=> T <=>	    MiscTools SubMenu\n");
		printf("	     %s\n", gl_get_prjct_menuspace);
		printf("	     Input  ==> ");
		ov_menu_input = getche();
		fflush(stdin);
		ov_menu_input = MIL(ov_menu_input);
		MAIN_MENU_INPUT_CTRL(ov_menu_input, ov_uid);
	} while ((ov_menu_input != 'e' && ov_menu_input != 'c')
		&& (ov_menu_input != 'a' && ov_menu_input != 'm')
		&& (ov_menu_input != 't'));

	return (ov_menu_input);
}

char SUB_MENU_REPEAT(char ov_menu_input, bool CHECK, char *ov_uid) {
	do {
		CHECK = FALSE;
		printf("\n	     %s\n", gl_get_prjct_menuspace);
		printf("	     Option <=> E <=>           Exit the tool\n");
		printf("	     Option <=> R <=>	     Restart the tool\n");
		printf("	     Option <=> T <=>     Return to Main Menu\n");
		printf("	     %s\n", gl_get_prjct_menuspace);
		printf("	     Input  ==> ");
		ov_menu_input = getche();
		fflush(stdin);
		ov_menu_input = MIL(ov_menu_input);
		CHECK = SUB_MENU_REPEAT_CTRL(ov_menu_input, CHECK, ov_uid);
	} while ((ov_menu_input != 'e' && ov_menu_input != 'r')
		&& (ov_menu_input != 't' || CHECK > 0));
	if (ov_menu_input == 'e') STD_EXIT(ov_uid);

	return (ov_menu_input);
}

char MAINTENANCE_CENTER_MENU(char ov_menu_input, char *ov_uid) {
	do {
		TITLES(ov_uid);
		printf("	This is the maintenance menu. Below you will find\n");
		printf("	some options/tools that you can choose from\n\n");
		printf("	     %s\n", gl_get_prjct_menuspace);
		printf("	     Option <=> E <=>	        Exit the tool\n");
		printf("	     Option <=> T <=>	  Return to Main Menu\n");
		printf("	     Option <=> R <=>	    Connection-Repair\n");
		printf("	     Option <=> C <=>	            Checkdisk\n");
		printf("	     Option <=> A <=>	 Checkdisk and repair\n");
		printf("	     %s\n", gl_get_prjct_menuspace);
		printf("	     Input  ==> ");
		ov_menu_input = getche();
		fflush(stdin);
		ov_menu_input = MIL(ov_menu_input);
		MAINTENANCE_CENTER_MENU_INPUT_CTRL(ov_menu_input, ov_uid);
	} while ((ov_menu_input != 'e' && ov_menu_input != 'r')
		&& (ov_menu_input != 'c' && ov_menu_input != 'a')
		&& (ov_menu_input != 't'));

	return (ov_menu_input);
}

char CELSIUS_FAHRENHEIT_MISCTOOL_MENU(char ov_menu_input, char *ov_uid) {
	do {
		TITLES(ov_uid);
		printf("	     %s\n", gl_get_prjct_menuspace);
		printf("	     Option <=> E <=>	        Exit the tool\n");
		printf("	     Option <=> T <=>	  Return to Main Menu\n");
		printf("	     Option <=> C <=>	Celsius to Fahrenheit\n");
		printf("	     Option <=> F <=>	Fahrenheit to Celsius\n");
		printf("	     %s\n", gl_get_prjct_menuspace);
		printf("	     Input  ==> ");
		ov_menu_input = getche();
		fflush(stdin);
		ov_menu_input = MIL(ov_menu_input);
		CELSIUS_FAHRENHEIT_MISCTOOL_MENU_CTRL(ov_menu_input, ov_uid);
	} while ((ov_menu_input != 'e' && ov_menu_input != 't')
		&& (ov_menu_input != 'c' && ov_menu_input != 'f'));

	return (ov_menu_input);
}

char MISCTOOLS_MENU(char ov_menu_input, bool CHECK, char *ov_uid) {
	do {
		TITLES(ov_uid);
		printf("	This is the misctools menu. Below you will find\n");
		printf("	some options/tools that you can choose from\n\n");
		printf("	     %s\n", gl_get_prjct_menuspace);
		printf("	     Option <=> E <=>	        Exit the tool\n");
		printf("	     Option <=> T <=>	  Return to Main Menu\n");
		printf("	     Option <=> P <=>	   Celsius/Fahrenheit\n");
		printf("	     Option <=> M <=>	 Multiplication table\n");
		printf("	     Option <=> R <=>	     Repeat my String\n");
		printf("	     %s\n", gl_get_prjct_menuspace);
		printf("	     Input  ==> ");
		ov_menu_input = getche();
		fflush(stdin);
		ov_menu_input = MIL(ov_menu_input);
		MISCTOOLS_MENU_CTRL(ov_menu_input, ov_uid);
	} while ((ov_menu_input != 'e' && ov_menu_input != 't')
		&& (ov_menu_input != 'p' && ov_menu_input != 'm')
		&& (ov_menu_input != 'r'));
	ov_menu_input = MISCTOOLS_OPERATION(ov_menu_input, ov_uid, CHECK);

	return (ov_menu_input);
}