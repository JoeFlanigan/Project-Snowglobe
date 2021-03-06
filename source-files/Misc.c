#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Misc.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => Some misc functions I didn't want to
//                             make own files for, so this is my trash bin

const static char _get_prg_author[] = "Rebirth aka Joe Flanigan";
const static char _get_prg_crdate[] = "09/04/2015";
const static char _get_prjct_name[] = "Project Snowglobe";
const static char _get_prjct_vers[] = "Version 0.6.0";
const static char _get_prg_nspace[] = "--------------------------------------------------";

void checkforBool(char *ov_uid) {
	char zw_er;

	if (!(__bool_true_false_are_defined)) {
		Titles(ov_uid);
		system("color 4");
		miscError(ERR, "Hi, it looks like something is broken, please restart the application.\n");
		printf("Press any key to continue.\n");
		zw_er = getche();
		stdExit(ov_uid);
	}
}

void Titles(char *ov_uid) {
	char _right_now[100];

	bbShort();
	setTime(_right_now);
	printf("	%s made by %s\n", _get_prjct_name, _get_prg_author);
	printf("	Created on the %s :: This is %s\n", _get_prg_crdate, _get_prjct_vers);
	printf("	%s :: Logged in as %s\n", _right_now, ov_uid);
	printf("	%s\n", _get_prg_nspace);
}

void snowglobeAuthMeTitles(void) {
	char _right_now[100];

	bbShort();
	setTime(_right_now);
	printf("	%s made by %s\n", _get_prjct_name, _get_prg_author);
	printf("	Created on the %s :: This is %s\n", _get_prg_crdate, _get_prjct_vers);
	printf("	     %s :: Not logged in\n", _right_now);
	printf("	%s\n", _get_prg_nspace);
}

char ovInputLower(char ov_menu_input) {
	return (ov_menu_input = tolower(ov_menu_input));
}

char setTime(char _right_now[100]) {
	time_t now = time(0);
	strftime(_right_now, 100, "%d/%m/%Y :: %H:%M:%S", localtime(&now));

	return (_right_now[100]);
}

void miscError(const char *loc, const char *msg) {
	printf("\n\nError found at %s: %s\n\n", loc, msg);
}

char calcInputRopLower(char c_input_rop) {
	return(c_input_rop = tolower(c_input_rop));
}

void colourGen(void) {
	unsigned int colour_c;
	colour_c = rand() % 15;

	switch (colour_c) {
	case 1: system("color 1"); break;
	case 2: system("color 2"); break;
	case 3: system("color 3"); break;
	case 4: system("color 4"); break;
	case 5: system("color 5"); break;
	case 6: system("color 6"); break;
	case 7: system("color 7"); break;
	case 8: system("color 8"); break;
	case 9:	system("color 9"); break;
	case 10: system("color A"); break;
	case 11: system("color B"); break;
	case 12: system("color C"); break;
	case 13: system("color D"); break;
	case 14: system("color E"); break;
	case 15: system("color F"); break;
	}
}