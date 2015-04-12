#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => BlackBox.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => Well, BlackBox will set our
//                             console colour/size etc, back to default
//                             and clear the output whenever we call it

void BB_SHORT(void) {
	system("color F");
	fflush(stdin);
	system("cls");
}

void BB_LOADING(void) {
	TITLES();				
	printf("	Loading, please be patient.\n");
	Sleep(BB);
	BB_SHORT();
}

void BB_ERROR(void) {
	char zw_er;

	TITLES();
	system("color 4");
	printf("	Something went wrong. Possible cause(s)\n");
	printf("	=> You've made an input mistake\n");
	printf("	=> Something unexpected did happen\n");
	printf("	Please retry your last action.\n");
	printf("\n	Type anything to continue!\n");
	zw_er = getche();
	BB_SHORT();
}

void BB_SUCCESS(void) {
	char zw_er;

	TITLES();
	system("color 2");
	printf("	The operation was successfully.\n");
	printf("\n	Type anything to continue!\n");
	zw_er = getche();
	BB_SHORT();
}
