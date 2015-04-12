#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Operation.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => The main operation(s) of this tool
//                             also from ATM.c/CALC.c on and on..

char MAIN_OPERATION(char ov_menu_input, bool CHECK, char *ov_uid) {
	switch (ov_menu_input) {
	case 'a': ov_menu_input = ATM(ov_menu_input, CHECK, ov_uid); break;
	case 'e': STD_EXIT(ov_uid); break;
	case 'c': ov_menu_input = CALCULATOR(ov_menu_input, CHECK, ov_uid); break;
	case 'm': ov_menu_input = MAINTENANCE_CENTER(ov_menu_input, CHECK, ov_uid); break;
	case 't': ov_menu_input = MISCTOOLS_MENU(ov_menu_input, CHECK, ov_uid); break;
	}

	return (ov_menu_input);
}

float CALCULATOR_OPERATION(unsigned int _no1, char _rechenop, unsigned int _no2, float _erg) {
	switch (_rechenop) {
	case '+': _erg = (float)(_no1 + _no2); break;
	case '-': _erg = ((float)_no1 - _no2); break;
	case '*': _erg = (float)(_no1 * _no2); break;
	case '/': _erg = ((float)_no1 / _no2); break;
	case '%': _erg = (float)(_no1 % _no2); break;
	case 's': _erg = (float)pow((float)_no1, _no2); break;
	}

	return (_erg);
}

int *ATM_OPERATION(float _atm_balance) {
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

char MAINTENANCE_CENTER_OPERATION(char ov_menu_input, char *ov_uid) {
	switch (ov_menu_input) {
	case 'e': STD_EXIT(ov_uid); break;
	case 'r': CONNECTION_REPAIR(ov_uid); break;
	case 'c': DISK_REPAIR_SCAN(ov_uid); break;
	case 'a': DISK_REPAIR_OPERATION(ov_uid); break;
	}

	return (ov_menu_input);
}

char MISCTOOLS_OPERATION(char ov_menu_input, char *ov_uid, bool CHECK) {
	switch (ov_menu_input) {
	case 'e': STD_EXIT(ov_uid); break;
	case 'p': ov_menu_input = CELSIUS_FAHRENHEIT_MISCTOOL(ov_menu_input, CHECK, ov_uid); break;
	case 'm': ov_menu_input = MULTIPLICATION_TABLE_M(ov_uid, ov_menu_input); break;
	case 'r': ov_menu_input = REPEAT_MY_STRING(ov_menu_input, ov_uid); break;
	}

	return (ov_menu_input);
}

void COLOUR_GEN(void) {
	unsigned int colour_c;
	colour_c = rand() % 15;

	switch (colour_c) {
	case 1: system("color 1"); break;
	case 2: system("color 2"); break;
	case 3: system("color 3"); break;
	case 4: system("color 4"); break;
	case 5: system("color 5"); break;
	case 6: system("color 6"); break;
	case 7: system("color 7"); break;
	case 8: system("color 8"); break;
	case 9:	system("color 9"); break;
	case 10: system("color A"); break;
	case 11: system("color B"); break;
	case 12: system("color C"); break;
	case 13: system("color D"); break;
	case 14: system("color E"); break;
	case 15: system("color F"); break;
	}
}