#include "MasterHandler.h"

/*
 *					    PJ; SNOWGLOBE -RB
 *				   	<===|===><==|==><===|===>
 *
 *		File Name		=> Atm.c
 *		Author  Name		=> "Rebirth" aka "Joe Flanigan"
 *		File Description	=> N/A
 */

char ATM(char ov_menu_input, bool CHECK) {
	int *_atm_opa;
	float _atm_balance;

	do {
		TITLES();
		_atm_balance = ATM_INPUT(CHECK);		// Input
		if (_atm_balance < 0.05f) {				// You cannot get paid when your balance is under 0.01 $, right? :3
			BB_ERROR();
			continue;
		}
		_atm_opa = ATM_OPERATION(_atm_balance);	// Processing
		ATM_OUTPUT(_atm_opa, _atm_balance);		// Output
		ov_menu_input = SUB_MENU_REPEAT(ov_menu_input, CHECK);
		assert(ov_menu_input != NULL);
	} while (ov_menu_input == 'r' || _atm_balance < 0.05f);

	return (ov_menu_input);
}

float ATM_INPUT(bool CHECK) {
	float atm_input;
	int r;

	do {
		CHECK = FALSE;
		printf("\n	Input a number between 0 and 759000 => ");
		r = scanf("%f", &atm_input);
		fflush(stdin);
		CHECK = ATM_INPUT_CTRL(atm_input, CHECK);
	} while ((atm_input > ALM || atm_input < ALN)
		|| (CHECK != FALSE));

	return (atm_input);
}

void ATM_OUTPUT(int *_atm_opa, float _atm_balance) {
	int i = NI;

	i++;
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One 500 %c Banknote", 128);
	else if (_atm_opa[i] > APL) printf("\n	%dx 500 %c Banknotes", _atm_opa[i], 128);
	i++;
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One 200 %c Banknote", 128);
	else if (_atm_opa[i] > APL) printf("\n	%dx 200 %c Banknotes", _atm_opa[i], 128);
	i++;
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One 100 %c Banknote", 128);
	else if (_atm_opa[i] > APL) printf("\n	%dx 100 %c Banknotes", _atm_opa[i], 128);
	i++;
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One  50 %c Banknote", 128);
	else if (_atm_opa[i] > APL) printf("\n	%dx  50 %c Banknotes", _atm_opa[i], 128);
	i++;
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One  20 %c Banknote", 128);
	else if (_atm_opa[i] > APL) printf("\n	%dx  20 %c Banknotes", _atm_opa[i], 128);
	i++;
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One  10 %c Banknote", 128);
	else if (_atm_opa[i] > APL) printf("\n	%dx  10 %c Banknotes", _atm_opa[i], 128);
	i++;
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One   5 %c Banknote", 128);
	else if (_atm_opa[i] > APL) printf("\n	%dx   5 %c Banknotes", _atm_opa[i], 128);
	i++;
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One   2 %c piece", 128);
	else if (_atm_opa[i] > APL) printf("\n	%dx   2 %c pieces", _atm_opa[i], 128);
	i++;
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One   1 %c piece", 128);
	else if (_atm_opa[i] > APL) printf("\n	%dx   1 %c pieces", _atm_opa[i], 128);
	i++;
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One  50 cent piece");
	else if (_atm_opa[i] > APL) printf("\n	%dx  50 cent pieces", _atm_opa[i]);
	i++;
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One  20 cent piece");
	else if (_atm_opa[i] > APL) printf("\n	%dx  20 cent pieces", _atm_opa[i]);
	i++;
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One  10 cent piece");
	else if (_atm_opa[i] > APL) printf("\n	%dx  10 cent pieces", _atm_opa[i]);
	i++;
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One   5 cent piece");
	else if (_atm_opa[i] > APL) printf("\n	%dx   5 cent pieces", _atm_opa[i]);
	i++;
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One   2 cent piece");
	else if (_atm_opa[i] > APL) printf("\n	%dx   2 cent pieces", _atm_opa[i]);
	i++;
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One   1 cent piece");
	else if (_atm_opa[i] > APL) printf("\n	%dx   1 cent pieces", _atm_opa[i]);

	printf("\n");
}
