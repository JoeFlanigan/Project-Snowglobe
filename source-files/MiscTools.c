#include "MasterHandler.h"

#define CELSIUS_TO_FAHRENHEIT(x) ((x) * 1.8 + 32 )
#define FAHRENHEIT_TO_CELSIUS(x) ((x - 32) / 1.8)
#define CELSIUS_MINIMUM_INPUT (0)
#define CELSIUS_MAXIMUM_INPUT (299)
#define FAHRENHEIT_MINIMUM_INPUT (0)
#define FAHRENHEIT_MAXIMUM_INPUT (759)
#define MULTIPLICATION_TABLE_TMR (499)

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => MiscTools.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => MiscTools that have their own Sub-Menu/lil function

char celfahMiscTool(char ov_menu_input, bool CHECK, char *ov_uid) {
	float fahrenheit, celsius;
	int r;

	do {
		ov_menu_input = cfMenu(ov_menu_input, ov_uid);
		if (ov_menu_input == 't') continue;
		switch (ov_menu_input) {
		case 'e': stdExit(ov_uid);
			break;
		case 'c':
#pragma region CELSIUS_TO_FAHRENHEIT
			do {
				Titles(ov_uid);
				printf("	Input in Celsius (0 - 299) => ");
				r = scanf("%f", &celsius);
				if (celsius > CELSIUS_MINIMUM_INPUT || celsius < CELSIUS_MAXIMUM_INPUT) {
					bbError(ov_uid);
					continue;
				}
				fahrenheit = ((float)CELSIUS_TO_FAHRENHEIT(celsius));
				printf("\n	%.3f degree(s) celsius is/are equal to %.3f fahrenheit.\n", celsius, fahrenheit);
			} while ((celsius > CELSIUS_MINIMUM_INPUT || celsius < CELSIUS_MAXIMUM_INPUT)
				|| r != 1);
#pragma endregion CELSIUS_TO_FAHRENHEIT
			break;
		case 'f':
#pragma region FAHRENHEIT_TO_CELSIUS
			do {
				Titles(ov_uid);
				printf("	Input in fahrenheit (0 - 759) => ");
				r = scanf("%f", &fahrenheit);
				if (fahrenheit > FAHRENHEIT_MINIMUM_INPUT || fahrenheit < FAHRENHEIT_MAXIMUM_INPUT) {
					bbError(ov_uid);
					continue;
				}
				celsius = ((float)FAHRENHEIT_TO_CELSIUS(fahrenheit));
				printf("\n	%.3f fahrenheit is equal to %.3f celsius.\n", fahrenheit, celsius);
			} while ((celsius > FAHRENHEIT_MINIMUM_INPUT || celsius < FAHRENHEIT_MAXIMUM_INPUT)
				|| r != 1);
#pragma endregion FAHRENHEIT_TO_CELSIUS
			break;
		}
		ov_menu_input = subMenuRepeat(ov_menu_input, CHECK, ov_uid);
		assert(ov_menu_input != 0);
	} while (ov_menu_input == 'r');

	return (ov_menu_input);
}

char multiplicationTable(char *ov_uid, char ov_menu_input) {
	int i, j, k = 2;
	char _mt;
	bool _abort = FALSE;

	Titles(ov_uid);
	for (i = 1; i <= 10; INC(i)) {
		if (i == k) {
			printf("	Press backspace to abort...\n");
			printf("	Or type anything else to continue...\n");
			_mt = getche();
			fflush(stdin);
			if (_mt == 8) _abort = TRUE;
			Titles(ov_uid);
			INC(k);
		}
		for (j = 1; j <= 10; INC(j)) {
			if (_abort == TRUE) break;
			printf("	%d x %d = %d\n", i, j, (i * j));
			colourGen();
			Sleep(MULTIPLICATION_TABLE_TMR);
		}
		if (_abort == TRUE) break;
	}
	if (_abort == TRUE) ov_menu_input = 't';

	return (ov_menu_input);
}

char repeatMe(char ov_menu_input, char *ov_uid) {
	char _sentence[101];

	do {
		Titles(ov_uid);
		printf("\n	Enter a sentence => ");
		// scanf("%[^\t]s", _sentence); // %129[^\t]s , s = string, 129 = maximum accepted chars, [^\t] = accept spaces // Option I.
#pragma warning(suppress: 6386)
		gets(_sentence); // Option II. temporary solution(tm) temp ftw
		printf("\n	So you... %s ...right? :3\n", _sentence);

		printf("\n	Press    <=> T <=> to get back to the main menu\n");
		printf("	Or press <=> R <=> to repeat this sub-tool\n");
		printf("	Input => ");
		ov_menu_input = getche();
		ov_menu_input = ovInputLower(ov_menu_input);
		miscToolsCtrl(ov_menu_input, ov_uid);
	} while ((ov_menu_input != 'r' && ov_menu_input != 't')
		|| (ov_menu_input == 'r'));

	return (ov_menu_input);
}

char markAverageSum(char ov_menu_input, char *ov_uid) {
	float _marks[10], _sum = NI;
	int i, r;

	do {
		for (i = 0; i < 10; INC(i)) {
			do {
				Titles(ov_uid);
				printf("	(INr:%d) Input a mark (1 - 6) => ", i);
				r = scanf("%f", &_marks[i]);
				if (_marks[i] < 1 || _marks[i] > 6) bbError(ov_uid);
			} while ((_marks[i] < 1 || _marks[i] > 6)
				|| (r != 1));
		}
		Titles(ov_uid);
		for (i = 0; i < 10; INC(i)) {
			_sum = CALC_ADDITION(_sum, _marks[i]);
		}
		for (i = 0; i < 10; INC(i)) {
			printf("	Input no. %d was => %.3f\n", i, _marks[i]);
		}
		printf("\n	Average => %.3f , Sum => %.3f\n", _sum / 10, _sum);

		printf("\n	Press    <=> T <=> to get back to the main menu\n");
		printf("	Or press <=> R <=> to repeat this sub-tool\n");

		printf("\n	Input => ");
		ov_menu_input = getche();
		ov_menu_input = ovInputLower(ov_menu_input);
		miscToolsCtrl(ov_menu_input, ov_uid);
	} while ((ov_menu_input != 'r' && ov_menu_input != 't')
		|| (ov_menu_input == 'r'));

	return (ov_menu_input);
}

#undef CELSIUS_TO_FAHRENHEIT
#undef FAHRENHEIT_TO_CELSIUS
#undef CELSIUS_MINIMUM_INPUT
#undef CELSIUS_MAXIMUM_INPUT
#undef FAHRENHEIT_MINIMUM_INPUT
#undef FAHRENHEIT_MAXIMUM_INPUT
#undef MULTIPLICATION_TABLE_TMR
