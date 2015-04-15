#include "MasterHandler.h"

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => Auth.c
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => Here we will validate user logins,
//                             before they can access the tool

char *snowglobeAuthMe(bool CHECK) {
	char *_pw, *_uid;

	do {
		CHECK = FALSE;
		snowglobeAuthMeTitles();
		printf("	      Access to Project Snowglobe is limited,\n");
		printf("	        please enter your credentials below\n\n");
		printf("	Input User-ID  => ");
		_uid = snowglobeAuthMeUID();
		printf("\n");
		printf("	Input Password => ");
		_pw = snowglobeAuthMePW();
		printf("\n");
		CHECK = snowglobeAuthMeValidator(CHECK, _pw, _uid);
	} while (CHECK == TRUE);

	return (_uid);
}

char *snowglobeAuthMeUID(void) {
	static char uid_ch, uid[26];
	int j = NI;

	while (1) {
		if (j < 0) j = NI;
		uid_ch = getch();
		if (uid_ch == 13) break;
		if (uid_ch == 8) {
			putch('\b');
			putch(0);
			putch('\b');
			DEC(j);
			continue;
		}
		else {
			uid[INC(j)] = uid_ch;
			uid_ch = '*';
			putch(uid_ch);
		}
	}
	uid[j] = '\0';
	fflush(stdin);

	return (uid);
}

char *snowglobeAuthMePW(void) {
	static char pw[26], pw_ch;
	int i = NI;

	while (1) {
		if (i < 0) i = NI;
		pw_ch = getch();
		if (pw_ch == 13) break;
		if (pw_ch == 8) {
			putch('\b');
			putch(0);
			putch('\b');
			DEC(i);
			continue;
		}
		else {
			pw[INC(i)] = pw_ch;
			pw_ch = '*';
			putch(pw_ch);
		}
	}
	pw[i] = '\0';
	fflush(stdin);

	return (pw);
}

bool snowglobeAuthMeValidator(bool CHECK, char *_pw, char *_uid) {
	const char Stored_UserIDs[][26] = {
		"JoeFlanigan",
		"Guest"
	};
	const char Stored_Passwords[][26] = {
		"cakeIZtasty",
		"guestlogin"
	};

	if ((strcmp(Stored_UserIDs[0], _uid) == 0) && (strcmp(Stored_Passwords[0], _pw) == 0)) snowglobeAuthMeWB(_uid);
	else if ((strcmp(Stored_UserIDs[1], _uid) == 0) && (strcmp(Stored_Passwords[1], _pw) == 0)) snowglobeAuthMeWB(_uid);
	else {
		snowglobeAuthMeTitles();
		system("color 4");
		printf("	Your username/password combination was wrong.\n");
		printf("	Try again...\n");

		printf("\n	Press any key to continue\n");
		CHECK = TRUE;
		#pragma warning(suppress: 6031)
		getche();
	}
	
	return (CHECK);
}

void snowglobeAuthMeWB(char *_uid) {
	snowglobeAuthMeTitles();
	system("color 2");
	printf("	Welcome back Mr./Mrs. %s.\n", _uid);
	printf("	Have fun! :D\n");

	printf("\n	~your Joe Flanigan");
	fflush(stdin);
	#pragma warning(suppress: 6031)
	getche();
}