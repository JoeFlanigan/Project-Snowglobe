#ifndef __fnc_types_H__
#define __fnc_types_H__

/*
 *					      PJ; SNOWGLOBE -RB
 *				   	<===|===><==|==><===|===>
 *
 *		File Name		    	=> fnc_types.h
 *		Author  Name	  	=> "Rebirth" aka "Joe Flanigan"
 *		File Description	=> N/A
 */

// Atm.c
char ATM(char, bool);
float ATM_INPUT(bool);
void ATM_OUTPUT(int*, float);
// Auth.c
void SG_AUTH_SYS_INPUT_PW(void);
// BlackBox.c
void BB_SHORT(void);
void BB_LOADING(void);
void BB_ERROR(void);
void BB_SUCCESS(void);
// Calc.c
char CALCULATOR(char, bool);
unsigned int CALCULATOR_INPUT(bool);
char CALCULATOR_INPUT_ROP(bool);
void CALCULATOR_OUTPUT(unsigned int, char, unsigned int, float);
// Exit.c
unsigned int STD_EXIT(void);
// Input_Ctrl.c
void MAIN_MENU_INPUT_CTRL(char);
bool CALCULATOR_INPUT_ROP_CTRL(char, bool);
bool CALCULATOR_INPUT_CTRL(unsigned int, bool);
bool ATM_INPUT_CTRL(float, bool);
void MAINTENANCE_CENTER_MENU_INPUT_CTRL(char);
bool SUB_MENU_REPEAT_CTRL(char, bool);
void CELSIUS_FAHRENHEIT_MISCTOOL_MENU_CTRL(char);
// Intro.c
void ShinyIntro(void);
// MaintenanceCenter.c
char MAINTENANCE_CENTER(char, bool);
void CONNECTION_REPAIR(void);
void DISK_REPAIR_SCAN(void);
void DISK_REPAIR_OPERATION(void);
// Misc.c
void BOOL_CHECK(void);
void TITLES(void);
char MIL(char);
char TIME_DEF(char);
void MISC_ERROR(const char*, const char*);
char CALCULATOR_INPUT_ROP_LOWER(char);
// MiscTools.c
char CELSIUS_FAHRENHEIT_MISCTOOL(char, bool);
// Operation.c
char MAIN_OPERATION(char, bool);
float CALCULATOR_OPERATION(unsigned int, char, unsigned int, float);
int *ATM_OPERATION(float);
char MAINTENANCE_CENTER_OPERATION(char);
void SHINY_INTRO_COLOUR_GEN(void);
// UI.c
char MAIN_MENU(char);
char MAINTENANCE_CENTER_MENU(char);
char SUB_MENU_REPEAT(char, bool);
char CELSIUS_FAHRENHEIT_MISCTOOL_MENU(char);

#endif
