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
		COLOUR_GEN();
		printf("	This  tool  was made by Joe Flanigan aka  Rebirth\n");
		printf("	<===============================================>\n");
		Sleep(ISG);													 
		COLOUR_GEN();
#pragma region intro_1
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
#pragma endregion intro_1
		Sleep(ISG);
		COLOUR_GEN();
#pragma region intro_2
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
#pragma endregion intro_2
		INC(j);
		Sleep(ISG);
		COLOUR_GEN();
#pragma region intro_3
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
#pragma endregion intro_3
		Sleep(ISG_L);
		INC(j);
		if (j < 6) continue;
		break;
	}
}