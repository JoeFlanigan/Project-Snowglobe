#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Misc.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => Some misc functions I didn't wanted to
//                             make own files for, so this is my trash bin

const static char _get_prg_author[] = "Rebirth aka Joe Flanigan";
const static char _get_prg_crdate[] = "09/04/2015";
const static char _get_prjct_name[] = "Project Snowglobe";
const static char _get_prjct_vers[] = "Version 0.5.6";
const static char _get_prg_nspace[] = "--------------------------------------------------";

void BOOL_CHECK(char *ov_uid) {
	char zw_er;

	if (!(__bool_true_false_are_defined)) {
		TITLES(ov_uid);
		system("color 4");
		MISC_ERROR(ERR, "Hi, it looks like something is broken, please restart the application.\n");
		printf("Press any key to continue.\n");
		zw_er = getche();
		STD_EXIT(ov_uid);
	}
}

void TITLES(char *ov_uid) {
	char _right_now[100];

	BB_SHORT();
	TIME_DEF(_right_now);
	printf("	%s made by %s\n", _get_prjct_name, _get_prg_author);
	printf("	Created on the %s :: This is %s\n", _get_prg_crdate, _get_prjct_vers);
	printf("	%s :: Logged in as %s\n", _right_now, ov_uid);
	printf("	%s\n", _get_prg_nspace);
}

void SG_AUTH_SYS_TITLES(void) {
	char _right_now[100];

	BB_SHORT();
	TIME_DEF(_right_now);
	printf("	%s made by %s\n", _get_prjct_name, _get_prg_author);
	printf("	Created on the %s :: This is %s\n", _get_prg_crdate, _get_prjct_vers);
	printf("	     %s :: Not logged in\n", _right_now);
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