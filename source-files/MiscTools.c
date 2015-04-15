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
		if (ov_menu_input == 't') continue;
		switch (ov_menu_input) {
		case 'e': STD_EXIT(ov_uid);
			break;
		case 'c':
#pragma region CELSIUS_TO_FAHRENHEIT
			do {
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
#pragma endregion CELSIUS_TO_FAHRENHEIT
			break;
		case 'f':
#pragma region FAHRENHEIT_TO_CELSIUS
			do {
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
#pragma endregion FAHRENHEIT_TO_CELSIUS
			break;
		}
		ov_menu_input = SUB_MENU_REPEAT(ov_menu_input, CHECK, ov_uid);
		assert(ov_menu_input != 0);
	} while (ov_menu_input == 'r');

	return (ov_menu_input);
}

char MULTIPLICATION_TABLE_M(char *ov_uid, char ov_menu_input) {
	int i, j, k = 2;
	char _mt;
	bool _abort = FALSE;

	TITLES(ov_uid);
	for (i = 1; i <= 10; INC(i)) {
		if (i == k) {
			printf("	Press backspace to abort...\n");
			printf("	Or type anything else to continue...\n");
			_mt = getche();
			fflush(stdin);
			if (_mt == 8) _abort = TRUE;
			TITLES(ov_uid);
			INC(k);
		}
		for (j = 1; j <= 10; INC(j)) {
			if (_abort == TRUE) break;
			printf("	%d x %d = %d\n", i, j, (i * j));
			COLOUR_GEN();
			Sleep(MT);
		}
		if (_abort == TRUE) break;
	}
	if (_abort == TRUE) ov_menu_input = 't';

	return (ov_menu_input);
}

char REPEAT_MY_STRING(char ov_menu_input, char *ov_uid) {
	char _sentence[101];

	do {
		TITLES(ov_uid);
		printf("\n	Enter a sentence => ");
		// scanf("%[^\t]s", _sentence); // %129[^\t]s , s = string, 129 = maximum accepted chars, [^\t] = accept spaces // Option I.
		gets(_sentence); // Option II., the easy way. Lol
		printf("\n	So you... %s ...right? :3\n", _sentence);

		printf("\n	Press    <=> T <=> to get back to the main menu\n");
		printf("	Or press <=> R <=> to repeat this sub-tool\n");
		printf("	Input => ");
		ov_menu_input = getche();
		ov_menu_input = MIL(ov_menu_input);
		MISCTOOLS_CTRL(ov_menu_input, ov_uid);
	} while ((ov_menu_input != 'r' && ov_menu_input != 't')
		|| (ov_menu_input == 'r'));

	return (ov_menu_input);
}

char MARK_AVERAGE_SUM(char ov_menu_input, char *ov_uid) {
	float _marks[10], _sum = NI;
	int i;

	do {
		for (i = 0; i < 10; INC(i)) {
			do {
				TITLES(ov_uid);
				printf("	(INr:%d) Input a mark (1 - 6) => ", i);
				scanf("%f", &_marks[i]);
				if (_marks[i] < 1 || _marks[i] > 6) BB_ERROR(ov_uid);
			} while (_marks[i] < 1 || _marks[i] > 6);
		}
		TITLES(ov_uid);
		for (i = 0; i < 10; INC(i)) {
			_sum = CA(_sum, _marks[i]);
		}
		for (i = 0; i < 10; INC(i)) {
			printf("	Input no. %d was => %.3f\n", i, _marks[i]);
		}
		printf("\n	Average => %.3f , Sum => %.3f\n", _sum / 10, _sum);

		printf("\n	Press    <=> T <=> to get back to the main menu\n");
		printf("	Or press <=> R <=> to repeat this sub-tool\n");

		printf("\n	Input => ");
		ov_menu_input = getche();
		ov_menu_input = MIL(ov_menu_input);
		MISCTOOLS_CTRL(ov_menu_input, ov_uid);
	} while ((ov_menu_input != 'r' && ov_menu_input != 't')
		|| (ov_menu_input == 'r'));

	return (ov_menu_input);
}