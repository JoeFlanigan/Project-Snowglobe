#include "MasterHandler.h"

void REPEAT_IT_BABE(void) {
	char _sentence[100];

	TITLES();
	printf("	     Enter a whole sentence => ");
	scanf("%10[^\t]s", _sentence);					// Will accept anything entered, stop input with "tab+enter" after sentence is written

	printf("Accepted => %s", _sentence);
	
	system("pause");
}


