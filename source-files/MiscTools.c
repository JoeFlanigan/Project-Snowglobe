#include "MasterHandler.h"

/*
 *					    PJ; SNOWGLOBE -RB
 *				   	<===|===><==|==><===|===>
 *
 *		File Name		=> MiscTools.c
 *		Author  Name		=> "Rebirth" aka "Joe Flanigan"
 *		File Description	=> N/A
 */

char CELSIUS_FAHRENHEIT_MISCTOOL(char ov_menu_input, bool CHECK) {
	float fahrenheit, celsius;

	do {
		ov_menu_input = CELSIUS_FAHRENHEIT_MISCTOOL_MENU(ov_menu_input);
		switch (ov_menu_input) {
		case 'e': STD_EXIT();
			break;
		case 'c': do {
					  TITLES();
					  printf("	Input in Celsius (0 - 299) => ");
					  scanf("%f", &celsius);
					  if (celsius > CMXI || celsius < CMI) {
						  BB_ERROR();
						  continue;
					  }
					  fahrenheit = ((float)CTF(celsius));
					  printf("\n	%.3f degree(s) celsius is/are equal to %.3f fahrenheit.\n", celsius, fahrenheit);
		} while (celsius > CMXI || celsius < CMI);
			break;
		case 'f': do {
					  TITLES();
					  printf("	Input in fahrenheit (0 - 759) => ");
					  scanf("%f", &fahrenheit);
					  if (fahrenheit > FMXI || fahrenheit < FMI) {
						  BB_ERROR();
						  continue;
					  }
					  celsius = ((float)FTC(fahrenheit));
					  printf("\n	%.3f fahrenheit is equal to %.3f celsius.\n", fahrenheit, celsius);
		} while (celsius > FMXI || celsius < FMI);
			break;
		}
		ov_menu_input = SUB_MENU_REPEAT(ov_menu_input, CHECK);
		assert(ov_menu_input != NULL);
	} while (ov_menu_input == 'r');

	return (ov_menu_input);
}
