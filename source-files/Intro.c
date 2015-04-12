#include "MasterHandler.h"

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
		//else if (j >= 6) SI = TRUE;
		//if (SI == TRUE) {
		//	SI = FALSE;
		//	j = NI;
		//	for (; 1;) {
		//		BB_SHORT();
		//		SHINY_INTRO_COLOUR_GEN();
		//		printf("Test 1 1\n");
		//		INC(j);
		//		Sleep(ISG);
		//		SHINY_INTRO_COLOUR_GEN();
		//		printf("Test 1 2\n");
		//		Sleep(ISG);
		//		SHINY_INTRO_COLOUR_GEN();
		//		printf("Test 1 3\n");
		//		INC(j);
		//		Sleep(ISG);
		//		SHINY_INTRO_COLOUR_GEN();
		//		printf("Test 1 4\n");
		//		Sleep(ISG);
		//		SHINY_INTRO_COLOUR_GEN();
		//		printf("Test 1 5\n");
		//		INC(j);
		//		Sleep(ISG_L);
		//		if (j < 6) continue;
		//		else if (j >= 6) SI = TRUE;
		//		if (SI == TRUE) {
		//			SI = FALSE;
		//			j = NI;
		//			for (; 1;) {
		//				BB_SHORT();
		//				SHINY_INTRO_COLOUR_GEN();
		//				printf("Test 1 1 1\n");
		//				INC(j);
		//				Sleep(ISG);
		//				SHINY_INTRO_COLOUR_GEN();
		//				printf("Test 1 1 2\n");
		//				Sleep(ISG);
		//				SHINY_INTRO_COLOUR_GEN();
		//				printf("Test 1 1 3\n");
		//				INC(j);
		//				Sleep(ISG);
		//				SHINY_INTRO_COLOUR_GEN();
		//				printf("Test 1 1 4\n");
		//				Sleep(ISG);
		//				SHINY_INTRO_COLOUR_GEN();
		//				printf("Test 1 1 5\n");
		//				INC(j);
		//				Sleep(ISG_L);
		//				if (j >= 6) SI = TRUE;
		//				if (SI == TRUE) break;
		//			}
		//		}
		//		break;
		//	}
		//}
		break;
	}
}
