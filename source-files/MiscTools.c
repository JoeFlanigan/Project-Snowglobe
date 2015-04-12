#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => MiscTools.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => MiscTools that have their own Sub-Menu

char CELSIUS_FAHRENHEIT_MISCTOOL(char ov_menu_input, bool CHECK, char *ov_uid) {
	float fahrenheit, celsius;

	do {
		ov_menu_input = CELSIUS_FAHRENHEIT_MISCTOOL_MENU(ov_menu_input, ov_uid);
		switch (ov_menu_input) {
		case 'e': STD_EXIT(ov_uid);
			break;
		case 'c': do {
					  TITLES(ov_uid);
					  printf("	Input in Celsius (0 - 299) => ");
					  #pragma warning(suppress: 6031)
					  scanf("%f", &celsius);
					  if (celsius > CMXI || celsius < CMI) {
						  BB_ERROR(ov_uid);
						  continue;
					  }
					  fahrenheit = ((float)CTF(celsius));
					  printf("\n	%.3f degree(s) celsius is/are equal to %.3f fahrenheit.\n", celsius, fahrenheit);
		} while (celsius > CMXI || celsius < CMI);
			break;
		case 'f': do {
					  TITLES(ov_uid);
					  printf("	Input in fahrenheit (0 - 759) => ");
					  #pragma warning(suppress: 6031)
					  scanf("%f", &fahrenheit);
					  if (fahrenheit > FMXI || fahrenheit < FMI) {
						  BB_ERROR(ov_uid);
						  continue;
					  }
					  celsius = ((float)FTC(fahrenheit));
					  printf("\n	%.3f fahrenheit is equal to %.3f celsius.\n", fahrenheit, celsius);
					  #pragma warning(suppress: 6001)
		} while (celsius > FMXI || celsius < FMI);
			break;
		}
		ov_menu_input = SUB_MENU_REPEAT(ov_menu_input, CHECK, ov_uid);
		assert(ov_menu_input != NULL);
	} while (ov_menu_input == 'r');

	return (ov_menu_input);
}