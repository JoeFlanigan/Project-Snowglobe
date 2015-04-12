#include "MasterHandler.h"

/*
 *					    PJ; SNOWGLOBE -RB
 *				   	<===|===><==|==><===|===>
 *
 *		File Name		=> Exit.c
 *		Author  Name		=> "Rebirth" aka "Joe Flanigan"
 *		File Description	=> N/A
 */

unsigned int STD_EXIT(void) {
	TITLES();
	printf("	Leaving Project Snowglobe, thank you for using it.\n");
	printf("	~Joe Flanigan\n");
	Sleep(AU);														// Wait a couple of seconds before closing the console
	exit(EXIT_SUCCESS);													// We could also use, return (0); here. Doesn't matter.
}
