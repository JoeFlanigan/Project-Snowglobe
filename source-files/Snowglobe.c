#include "MasterHandler.h" // Let's include our headers, nu?

/*		
 *						PJ; SNOWGLOBE -RB
 *				   	<===|===><==|==><===|===>
 *
 *      Project Name			=> "Project Snowglobe"
 *		Author  Name			=> "Rebirth" aka "Joe Flanigan"
 *		Project Output Language => "English"
 *								   - A couple of comments, within this source code
 *									 could be in german of course.
 *
 *		Project Description		=> "PJ; Snowglobe is my Sandbox, really it actually has no use."
 */

void SNOWGLOBE(void) { 
	char ov_menu_input = NI, *cck = NULL;
	bool CHECK = NI;

	ShinyIntro();

	do {
		BOOL_CHECK();
		ov_menu_input = MAIN_MENU(ov_menu_input);
		ov_menu_input = MAIN_OPERATION(ov_menu_input, CHECK);
	} while (ov_menu_input == 't');
}
