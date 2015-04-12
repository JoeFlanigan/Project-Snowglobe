#include "MasterHandler.h"

/*
 *					    PJ; SNOWGLOBE -RB
 *				   	<===|===><==|==><===|===>
 *
 *		File Name		=> Calc.c
 *		Author  Name		=> "Rebirth" aka "Joe Flanigan"
 *		File Description	=> N/A
 */

char CALCULATOR(char ov_menu_input, bool CHECK) { 
	unsigned int _no1, _no2;				
	char _rechenop;
	float _erg = NI;

	do {
		TITLES();
		_no1 = CALCULATOR_INPUT(CHECK);									// => Input of the first number
		_rechenop = CALCULATOR_INPUT_ROP(CHECK);						// => Input of the arithmetic operation(?)
		_no2 = CALCULATOR_INPUT(CHECK);									// => Input of number 2
		if (_no2 == 0 && _rechenop == '/') {							// => Some checks, to see if we can proceed
			BB_ERROR();												
			continue;													
		}
		_erg = CALCULATOR_OPERATION(_no1, _rechenop, _no2, _erg);		// => Processing
		CALCULATOR_OUTPUT(_no1, _rechenop, _no2, _erg);					// => Output
		ov_menu_input = SUB_MENU_REPEAT(ov_menu_input, CHECK);	// => Call the function, that will show us a menu to repeat or leave
		assert(ov_menu_input != NULL);									// If != NULL _call abort()
	} while (ov_menu_input == 'r' || _no2 == NULL && _rechenop == '/');

	return (ov_menu_input);
}
																	
unsigned int CALCULATOR_INPUT(bool CHECK) {
	unsigned int c_input;
	int r;	// useless, stuff. I wrote this line, so that the VS compiler shuts up... picky lil' girly (>_<)

	do {
		CHECK = FALSE;
		printf("\n	Input a number between 0 and 2500 => ");
		r = scanf("%u", &c_input);
		fflush(stdin);
		CHECK = CALCULATOR_INPUT_CTRL(c_input, CHECK);
	} while ((c_input > CLM || c_input < CLN)
		|| (CHECK != FALSE || r != 1));

	return (c_input);
}

char CALCULATOR_INPUT_ROP(bool CHECK) {
	char c_input_rop;

	do {
		CHECK = FALSE;
		printf("\n	Choose an arithmetic operation\n");
		printf("\n	+, -, *, /, %%, S => ");
		c_input_rop = getche();
		fflush(stdin);
		printf("\n");
		c_input_rop = CALCULATOR_INPUT_ROP_LOWER(c_input_rop);
		CHECK = CALCULATOR_INPUT_ROP_CTRL(c_input_rop, CHECK);
	} while ((c_input_rop != '+' && c_input_rop != '-')
		&& (c_input_rop != '*' && c_input_rop != '/')
		&& (c_input_rop != '%' && c_input_rop != 's')
		|| CHECK != FALSE);

	return (c_input_rop);
}

void CALCULATOR_OUTPUT(unsigned int _no1, char _rechenop, unsigned int _no2, float _erg) {
	printf("\n	%u %c %u = %.3f\n", _no1, _rechenop, _no2, _erg);
}
