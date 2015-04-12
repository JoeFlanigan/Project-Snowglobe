#include "MasterHandler.h"

unsigned int STD_EXIT(void) {
	TITLES();
	printf("	Leaving Project Snowglobe, thank you for using it.\n");
	printf("	~Joe Flanigan\n");
	Sleep(AU);														// Wait a couple of seconds before closing the console
	exit(EXIT_SUCCESS);													// We could also use, return (0); here. Doesn't matter.
}
