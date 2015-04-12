#include "MasterHandler.h"

void BB_SHORT(void) {
	system("color F");			/* Whenever we're calling our "system();" function, we are using the windows console to execute a command. 
								 * In this case, we're setting the consoles colour background to "F = White".
								 * I'll include a .txt file with all colour codes in the source, so you can take a look into it.
								 */

	fflush(stdin);				// fflush(stdin); is to clear the input cache, "stdin" stands for "standard input".

	system("cls");				/* Again we are executing a command via the windows console, this time we are executing
								 * "cls" = clearscreen". We could've also used "clrscr" without the system(); function.
								 * Using clrscr(); function is actually more safe and portable to an unix system, though
							     * I don't care so we stay at our system(); function.
								 */
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
	system("color 4");							// Makes the console output appear in red executing this via ms dos console
	printf("	Something went wrong. Possible cause(s)\n");
	printf("	=> You've made an input mistake\n");
	printf("	=> Something unexpected did happen\n");
	printf("	Please retry your last action.\n");
	printf("\n	Type anything to continue!\n");
	zw_er = getche();							// Wait for user input, before the console dismisses this message
	BB_SHORT();
}

void BB_SUCCESS(void) {
	char zw_er;

	TITLES();
	system("color 2");							// colour code 2 is for green
	printf("	The operation was successfully.\n");
	printf("\n	Type anything to continue!\n");
	zw_er = getche();							// Wait for user input, before the console dismisses this message
	BB_SHORT();
}
