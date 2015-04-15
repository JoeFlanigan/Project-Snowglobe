#include "MasterHandler.h"

#if !defined(INTRO_SNOWGLOBE_TMR) && !defined(INTRO_SNOWGLOBE_TMR_LONG)
	#define INTRO_SNOWGLOBE_TMR (1250)
	#define INTRO_SNOWGLOBE_TMER_LONG (2001)
#else
	#error Error: macro-mess found in Intro.c, go away. Please.
#endif

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Intro.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => Never forget about snowglobe! This
//                             awesome intro will make you help not to do so!

void shinyIntro(void) {
	int j = NI;
	bool SI = FALSE;

	for (; 1;) {
		bbShort();
		INC(j);
		colourGen();
		printf("	This  tool  was made by Joe Flanigan aka  Rebirth\n");
		printf("	<===============================================>\n");
		Sleep(INTRO_SNOWGLOBE_TMR);
		colourGen();
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
		Sleep(INTRO_SNOWGLOBE_TMR);
		colourGen();
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
		Sleep(INTRO_SNOWGLOBE_TMR);
		colourGen();
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
		Sleep(INTRO_SNOWGLOBE_TMER_LONG);
		INC(j);
		if (j < 6) continue;
		break;
	}
}

#undef INTRO_SNOWGLOBE_TMR
#undef INTRO_SNOWGLOBE_TMR_LONG