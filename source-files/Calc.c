#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Calc.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => This file will assemble all functions
//                             we will need for the calculator

char CALCULATOR(char ov_menu_input, bool CHECK, char *ov_uid) {
	unsigned int _no1, _no2;
	char _rechenop;
	float _erg = NI;

	do {
		TITLES(ov_uid);
		_no1 = CALCULATOR_INPUT(CHECK, ov_uid);
		_rechenop = CALCULATOR_INPUT_ROP(CHECK, ov_uid);
		_no2 = CALCULATOR_INPUT(CHECK, ov_uid);
		if (_no2 == 0 && _rechenop == '/') {
			BB_ERROR(ov_uid);
			continue;
		}
		_erg = CALCULATOR_OPERATION(_no1, _rechenop, _no2, _erg);
		CALCULATOR_OUTPUT(_no1, _rechenop, _no2, _erg);
		ov_menu_input = SUB_MENU_REPEAT(ov_menu_input, CHECK, ov_uid);
		assert(ov_menu_input != NULL);
	} while (ov_menu_input == 'r' || _no2 == NULL && _rechenop == '/');

	return (ov_menu_input);
}

unsigned int CALCULATOR_INPUT(bool CHECK, char *ov_uid) {
	unsigned int c_input;
#pragma warning(suppress: 6031)
	// int r; // I wrote this line, so that the VS compiler shuts up... picky lil' girly (>_<)
	// found a fix for the above, lel #rekt
	// No wait, this is not an actual fix, welp

	do {
		CHECK = FALSE;
		printf("\n	Input a number between 0 and 2500 => ");
		#pragma warning(suppress: 6031)
		scanf("%u", &c_input);                                       // r = scanf(blabla) fix later ...
		fflush(stdin);
		CHECK = CALCULATOR_INPUT_CTRL(c_input, CHECK, ov_uid);
	} while ((c_input > CLM || c_input < CLN)
		|| (CHECK != FALSE));

	return (c_input);
}

char CALCULATOR_INPUT_ROP(bool CHECK, char *ov_uid) {
	char c_input_rop;

	do {
		CHECK = FALSE;
		printf("\n	Choose an arithmetic operation\n");
		printf("\n	+, -, *, /, %%, S => ");
		c_input_rop = getche();
		fflush(stdin);
		printf("\n");
		c_input_rop = CALCULATOR_INPUT_ROP_LOWER(c_input_rop);
		CHECK = CALCULATOR_INPUT_ROP_CTRL(c_input_rop, CHECK, ov_uid);
	} while ((c_input_rop != '+' && c_input_rop != '-')
		&& (c_input_rop != '*' && c_input_rop != '/')
		&& (c_input_rop != '%' && c_input_rop != 's')
		|| CHECK != FALSE);

	return (c_input_rop);
}

void CALCULATOR_OUTPUT(unsigned int _no1, char _rechenop, unsigned int _no2, float _erg) {
	printf("\n	%u %c %u = %.3f\n", _no1, _rechenop, _no2, _erg);
}