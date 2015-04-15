#include "MasterHandler.h"

#ifndef BLACK_BOX_TMR
	#define BLACK_BOX_TMR (2499)
#else
	#error Error: macro-mess found in BlackBox.c, go away. Please.
#endif

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => BlackBox.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => Well, BlackBox will set our
//                             console colour/size etc, back to default
//                             and clear the output whenever we call for it

void bbShort(void) {
	system("color F");
	fflush(stdin);
	system("cls");
}

void bbLoading(char *ov_uid) {
	Titles(ov_uid);				
	printf("	Loading, please be patient.\n");
	Sleep(BLACK_BOX_TMR);
	bbShort();
}

void bbError(char *ov_uid) {
	char zw_er;

	Titles(ov_uid);
	system("color 4");
	printf("	Something went wrong. Possible cause(s)\n");
	printf("	=> You've made an input mistake\n");
	printf("	=> Something unexpected did happen\n");

	printf("\n	About Maintenance Center problems,\n");
	printf("	=> The maintenance Center does require\n");
	printf("	administrative rights to run the repairs.\n");
	printf("	Otherwise you will receive this message.\n");

	printf("\n	Please retry your last action.\n");
	printf("	Type anything to continue!");
	zw_er = getche();
	bbShort();
}

void bbSuccess(char *ov_uid) {
	Titles(ov_uid);
	system("color 2");
	printf("	The operation was successfully executed.\n");
}

#undef BLACK_BOX_TMR