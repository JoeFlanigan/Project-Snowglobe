#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Intro.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => Never forget about snowglobe! This
//                             awesome intro will make you help not to!

void ShinyIntro(void) {
	int j = NI;
	bool SI = FALSE;

	for (; 1;) {
		BB_SHORT();
		INC(j);
		SHINY_INTRO_COLOUR_GEN();
		printf("	This  tool  was made by Joe Flanigan aka  Rebirth\n");
		printf("	<===============================================>\n");
		Sleep(ISG);													 
		SHINY_INTRO_COLOUR_GEN();									 
		printf("	,------.                ,--.               ,--.   ");
		printf("\n");
		printf("	|  .--. ',--.--. ,---.  `--' ,---.  ,---.,-'  '-. ");
		printf("\n");
		printf("	|  '--' ||  .--'| .-. | ,--.| .-. :| .--''-.  .-' ");
		printf("\n");
		printf("	|  | --' |  |   ' '-' ' |  ||   --.| `--.  |  |   ");
		printf("\n");
		printf("	`--'     `--'    `---'.-'  / `----' `---'  `--'   ");
		printf("\n");
		printf("	                      '---'                       ");
		printf("\n");
		Sleep(ISG);
		SHINY_INTRO_COLOUR_GEN();
		printf("	 ,---.                                    ");
		printf("\n");
		printf("	'   .-' ,--,--,  ,---. ,--.   ,--.,-----. ");
		printf("\n");
		printf("	`.  `-. |      || .-. ||  |.'.|  |'-----' ");
		printf("\n");
		printf("	.-'    ||  ||  |' '-' '|   .'.   |        ");
		printf("\n");
		printf("	`-----' `--''--' `---' '--'   '--'        ");
		printf("\n");
		INC(j);
		Sleep(ISG);
		SHINY_INTRO_COLOUR_GEN();
		printf("			       ,--.       ,--.           ");
		printf("\n");
		printf("			 ,---. |  | ,---. |  |-.  ,---.  ");
		printf("\n");
		printf("			| .-. ||  || .-. || .-. '| .-. : ");
		printf("\n");
		printf("			' '-' '|  |' '-' '| `-' ||   --. ");
		printf("\n");
		printf("			.`-  | `--' `---'  `---'  `----' ");
		printf("\n");
		printf("			`---'                            ");
		printf("\n");
		Sleep(ISG_L);
		INC(j);
		if (j < 6) continue;
		break;
	}
}
