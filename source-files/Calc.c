#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Calc.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => This file will assemble all functions
//                             we will need for the calculator

char calc(char ov_menu_input, bool CHECK, char *ov_uid) {
	unsigned int _no1, _no2;
	char _rechenop;
	float _erg = NI;

	do {
		Titles(ov_uid);
		_no1 = calcInput(CHECK, ov_uid);
		_rechenop = calcInputRop(CHECK, ov_uid);
		_no2 = calcInput(CHECK, ov_uid);
		if (_no2 == 0 && _rechenop == '/') {
			bbError(ov_uid);
			continue;
		}
		_erg = calcOperation(_no1, _rechenop, _no2, _erg);
		calcOutput(_no1, _rechenop, _no2, _erg);
		ov_menu_input = subMenuRepeat(ov_menu_input, CHECK, ov_uid);
		assert(ov_menu_input != 0);
	} while (ov_menu_input == 'r' || _no2 == 0 && _rechenop == '/');

	return (ov_menu_input);
}

unsigned int calcInput(bool CHECK, char *ov_uid) {
	unsigned int c_input;
	int r;

	do {
		CHECK = FALSE;
		printf("\n	Input a number between 0 and 2500 => ");
		r = scanf("%u", &c_input);     
		fflush(stdin);
		CHECK = calcInputCtrl(c_input, CHECK, ov_uid, r);
	} while ((c_input > CLM || c_input < CLN)
		|| (CHECK != FALSE || r != 1));

	return (c_input);
}

char calcInputRop(bool CHECK, char *ov_uid) {
	char c_input_rop;

	do {
		CHECK = FALSE;
		printf("\n	Choose an arithmetic operation\n");

		printf("\n	+, -, *, /, %%, S => ");
		c_input_rop = getche();
		fflush(stdin);
		printf("\n");
		c_input_rop = calcInputRopLower(c_input_rop);
		CHECK = calcInputRopCtrl(c_input_rop, CHECK, ov_uid);
	} while ((c_input_rop != '+' && c_input_rop != '-')
		&& (c_input_rop != '*' && c_input_rop != '/')
		&& (c_input_rop != '%' && c_input_rop != 's')
		|| CHECK != FALSE);

	return (c_input_rop);
}

float calcOperation(unsigned int _no1, char _rechenop, unsigned int _no2, float _erg) {
	switch (_rechenop) {
	case '+': _erg = (float)CALC_ADDITION(_no1, _no2); break;
	case '-': _erg = CALC_SUBTRACTION((float)_no1, _no2); break;
	case '*': _erg = (float)CALC_MULTIPLICATION(_no1, _no2); break;
	case '/': _erg = CALC_DIVISION((float)_no1, _no2); break;
	case '%': _erg = (float)CALC_MODULO(_no1, _no2); break;
	case 's': _erg = (float)pow((float)_no1, _no2); break;
	}

	return (_erg);
}

void calcOutput(unsigned int _no1, char _rechenop, unsigned int _no2, float _erg) {
	printf("\n	%u %c %u = %.3f\n", _no1, _rechenop, _no2, _erg);
}