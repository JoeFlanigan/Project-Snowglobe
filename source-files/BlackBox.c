#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => BlackBox.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => Well, BlackBox will set our
//                             console colour/size etc, back to default
//                             and clear the output whenever we call for it

void BB_SHORT(void) {
	system("color F");
	fflush(stdin);
	system("cls");
}

void BB_LOADING(char *ov_uid) {
	TITLES(ov_uid);				
	printf("	Loading, please be patient.\n");
	Sleep(BB);
	BB_SHORT();
}

void BB_ERROR(char *ov_uid) {
	char zw_er;

	TITLES(ov_uid);
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
	BB_SHORT();
}

void BB_SUCCESS(char *ov_uid) {
	TITLES(ov_uid);
	system("color 2");
	printf("	The operation was successfully executed.\n");
}