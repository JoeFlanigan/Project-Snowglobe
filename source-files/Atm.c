#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Atm.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => This is our main file, where we will
//                             assemble all operations used for the
//                             ATM machine

char atmMachine(char ov_menu_input, bool CHECK, char *ov_uid) {
	int *_atm_opa;
	float _atm_balance;

	do {
		Titles(ov_uid);
		_atm_balance = atmInput(CHECK, ov_uid);
		if (_atm_balance < 0.05f) {
			bbError(ov_uid);
			continue;
		}
		_atm_opa = atmOperation(_atm_balance);
		atmOutput(_atm_opa, _atm_balance);
		ov_menu_input = subMenuRepeat(ov_menu_input, CHECK, ov_uid);
		assert(ov_menu_input != 0);
	} while (ov_menu_input == 'r' || _atm_balance < 0.05f);

	return (ov_menu_input);
}

float atmInput(bool CHECK, char *ov_uid) {
	float atm_input;
	int r;

	do {
		CHECK = FALSE;
		printf("\n	The ATM-Machine will return the below entered\n");
		printf("	amount of cash in the biggest available euros.\n");

		printf("\n	Input a number between 0.05 and 759000 => ");
		r = scanf("%f", &atm_input);
		fflush(stdin);
		CHECK = atmInputCtrl(atm_input, CHECK, ov_uid, r);
	} while ((atm_input > ALM || atm_input < ALN)
		|| (CHECK != FALSE || r != 1));

	return (atm_input);
}

// This function will store our output in the "atm_opa[16]" array, which we will
// access with a pointer later on. It's quite easy, yo.
int *atmOperation(float _atm_balance) {
	static int atm_opa[16] = { NI, NI, NI, NI, NI, NI, NI, NI, NI, NI, NI, NI, NI, NI, NI, NI };

	while (_atm_balance >= 0.01f) {
		if (_atm_balance >= 500.00) {
			INC(atm_opa[1]);
			_atm_balance -= 500.00f;
		}
		else if (_atm_balance >= 200.00) {
			INC(atm_opa[2]);
			_atm_balance -= 200.00f;
		}
		else if (_atm_balance >= 100.00) {
			INC(atm_opa[3]);
			_atm_balance -= 100.00f;
		}
		else if (_atm_balance >= 50.00) {
			INC(atm_opa[4]);
			_atm_balance -= 50.00f;
		}
		else if (_atm_balance >= 20.00) {
			INC(atm_opa[5]);
			_atm_balance -= 20.00f;
		}
		else if (_atm_balance >= 10.00) {
			INC(atm_opa[6]);
			_atm_balance -= 10.00f;
		}
		else if (_atm_balance >= 5.00) {
			INC(atm_opa[7]);
			_atm_balance -= 5.00f;
		}
		else if (_atm_balance >= 2.00) {
			INC(atm_opa[8]);
			_atm_balance -= 2.00f;
		}
		else if (_atm_balance >= 1.00) {
			INC(atm_opa[9]);
			_atm_balance -= 1.00f;
		}
		else if (_atm_balance >= 0.50) {
			INC(atm_opa[10]);
			_atm_balance -= 0.50f;
		}
		else if (_atm_balance >= 0.20) {
			INC(atm_opa[11]);
			_atm_balance -= 0.20f;
		}
		else if (_atm_balance >= 0.10) {
			INC(atm_opa[12]);
			_atm_balance -= 0.10f;
		}
		else if (_atm_balance >= 0.05) {
			INC(atm_opa[13]);
			_atm_balance -= 0.05f;
		}
		else if (_atm_balance >= 0.02) {
			INC(atm_opa[14]);
			_atm_balance -= 0.02f;
		}
		else if (_atm_balance >= 0.01) {
			INC(atm_opa[15]);
			_atm_balance -= 0.01f;
		}
	}

	return (atm_opa);
}

void atmOutput(int *_atm_opa, float _atm_balance) {
	int i = NI;

	INC(i);
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One 500 %c Banknote", 128);
		else if (_atm_opa[i] > APL) printf("\n	%dx 500 %c Banknotes", _atm_opa[i], 128);
	INC(i);
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One 200 %c Banknote", 128);
		else if (_atm_opa[i] > APL) printf("\n	%dx 200 %c Banknotes", _atm_opa[i], 128);
	INC(i);
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One 100 %c Banknote", 128);
		else if (_atm_opa[i] > APL) printf("\n	%dx 100 %c Banknotes", _atm_opa[i], 128);
	INC(i);
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One  50 %c Banknote", 128);
		else if (_atm_opa[i] > APL) printf("\n	%dx  50 %c Banknotes", _atm_opa[i], 128);
	INC(i);
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One  20 %c Banknote", 128);
		else if (_atm_opa[i] > APL) printf("\n	%dx  20 %c Banknotes", _atm_opa[i], 128);
	INC(i);
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One  10 %c Banknote", 128);
		else if (_atm_opa[i] > APL) printf("\n	%dx  10 %c Banknotes", _atm_opa[i], 128);
	INC(i);
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One   5 %c Banknote", 128);
		else if (_atm_opa[i] > APL) printf("\n	%dx   5 %c Banknotes", _atm_opa[i], 128);
	INC(i);
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One   2 %c piece", 128);
		else if (_atm_opa[i] > APL) printf("\n	%dx   2 %c pieces", _atm_opa[i], 128);
	INC(i);
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One   1 %c piece", 128);
		else if (_atm_opa[i] > APL) printf("\n	%dx   1 %c pieces", _atm_opa[i], 128);
	INC(i);
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One  50 cent piece");
		else if (_atm_opa[i] > APL) printf("\n	%dx  50 cent pieces", _atm_opa[i]);
	INC(i);
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One  20 cent piece");
		else if (_atm_opa[i] > APL) printf("\n	%dx  20 cent pieces", _atm_opa[i]);
	INC(i);
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One  10 cent piece");
		else if (_atm_opa[i] > APL) printf("\n	%dx  10 cent pieces", _atm_opa[i]);
	INC(i);
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One   5 cent piece");
		else if (_atm_opa[i] > APL) printf("\n	%dx   5 cent pieces", _atm_opa[i]);
	INC(i);
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One   2 cent piece");
		else if (_atm_opa[i] > APL) printf("\n	%dx   2 cent pieces", _atm_opa[i]);
	INC(i);
	if (_atm_opa[i] > AOSG && _atm_opa[i] < AOMSG) printf("\n	One   1 cent piece");
		else if (_atm_opa[i] > APL) printf("\n	%dx   1 cent pieces", _atm_opa[i]);
	printf("\n");
}