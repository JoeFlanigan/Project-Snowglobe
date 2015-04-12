#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Misc.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => Some misc functions I didn't wanted to
//                             make own files for, so this is my trash bin

void BOOL_CHECK(void) {
	char zw_er;

	if (!(__bool_true_false_are_defined)) {
		TITLES();
		system("color 4");
		MISC_ERROR(ERR, "Hi, it looks like something is broken, please restart the application.\n");
		printf("Press any key to continue.\n");
		zw_er = getche();
		STD_EXIT();
	}
}

void TITLES(void) {
	char _right_now[100];
	const char _get_prg_author[] = "Rebirth aka Joe Flanigan";
	const char _get_prg_crdate[] = "09/04/2015";
	const char _get_prjct_name[] = "Project Snowglobe";
	const char _get_prjct_vers[] = "Version 0.3";
	const char _get_prg_nspace[] = "--------------------------------------------------";

	BB_SHORT();
	TIME_DEF(_right_now);
	printf("	%s made by %s\n", _get_prjct_name, _get_prg_author);
	printf("	 Created on the %s :: This is %s\n", _get_prg_crdate, _get_prjct_vers);
	printf("			%s\n", _right_now);
	printf("	%s\n", _get_prg_nspace);
}

char MIL(char ov_menu_input) {
	return (ov_menu_input = tolower(ov_menu_input));
}

char TIME_DEF(char _right_now[100]) {
	time_t now = time(0);
	strftime(_right_now, 100, "%d/%m/%Y :: %H:%M:%S", localtime(&now));

	return (_right_now);
}

void MISC_ERROR(const char *loc, const char *msg) {
	printf("\n\nError found at %s: %s\n\n", loc, msg);
}

char CALCULATOR_INPUT_ROP_LOWER(char c_input_rop) {
	return(c_input_rop = tolower(c_input_rop));
}
