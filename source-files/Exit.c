#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Exit.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => Surprise, surprise. It will serve with exit options
//                             for this sweet tool

unsigned int STD_EXIT(void) {
	TITLES();
	printf("	Leaving Project Snowglobe, thank you for using it.\n");
	printf("	~Joe Flanigan\n");
	Sleep(AU);
	exit(EXIT_SUCCESS);
}
