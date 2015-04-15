#include "MasterHandler.h"

#ifndef STD_EXIT_TMR
	#define STD_EXIT_TMR (2009)
#else
	#error Error: macro-mess found in Exit.c, go away. Please.
#endif

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Exit.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => Surprise, surprise. It will serve with exit options
//                             for this sweet tool

unsigned int stdExit(char *ov_uid) {
	Titles(ov_uid);
	printf("	Leaving Project Snowglobe, thank you for using it.\n");
	printf("	~Joe Flanigan\n");
	Sleep(STD_EXIT_TMR);
	exit(EXIT_SUCCESS);
}

#undef STD_EXIT_TMR