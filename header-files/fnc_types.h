#ifndef __fnc_types_H__
#define __fnc_types_H__

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => fnc_types.h
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => This file will store our function prototypes

// Atm.c
char ATM(char, bool, char *);
float ATM_INPUT(bool, char *);
void ATM_OUTPUT(int *, float);
// Auth.c
char *SG_AUTH_SYS(bool);
char *SG_AUTH_SYS_UID_PROCESSING(void);
char *SG_AUTH_SYS_PW_PROCESSING(void);
bool SG_AUTH_SYS_UID_PW_VALIDATION(bool, char *, char *);
void SG_AUTH_SYS_WELCOMEBACK(char *);
// BlackBox.c
void BB_SHORT(void);
void BB_LOADING(char *);
void BB_ERROR(char *);
void BB_SUCCESS(char *);
// Calc.c
char CALCULATOR(char, bool, char *);
unsigned int CALCULATOR_INPUT(bool, char *);
char CALCULATOR_INPUT_ROP(bool, char *);
void CALCULATOR_OUTPUT(unsigned int, char, unsigned int, float);
// Exit.c
unsigned int STD_EXIT(char *);
// Input_Ctrl.c
void MAIN_MENU_INPUT_CTRL(char, char *);
bool CALCULATOR_INPUT_ROP_CTRL(char, bool, char *);
bool CALCULATOR_INPUT_CTRL(unsigned int, bool, char *);
bool ATM_INPUT_CTRL(float, bool, char *);
void MAINTENANCE_CENTER_MENU_INPUT_CTRL(char, char *);
bool SUB_MENU_REPEAT_CTRL(char, bool, char *);
void CELSIUS_FAHRENHEIT_MISCTOOL_MENU_CTRL(char, char *);
// Intro.c
void ShinyIntro(void);
// MaintenanceCenter.c
char MAINTENANCE_CENTER(char, bool, char *);
void CONNECTION_REPAIR(char *);
void DISK_REPAIR_SCAN(char *);
void DISK_REPAIR_OPERATION(char *);
// Misc.c
void BOOL_CHECK(char *);
void TITLES(char *);
void SG_AUTH_SYS_TITLES(void);
char MIL(char);
char TIME_DEF(char);
void MISC_ERROR(const char *, const char *);
char CALCULATOR_INPUT_ROP_LOWER(char);
// MiscTools.c
char CELSIUS_FAHRENHEIT_MISCTOOL(char, bool, char *);
// Operation.c
char MAIN_OPERATION(char, bool, char *);
float CALCULATOR_OPERATION(unsigned int, char, unsigned int, float);
int *ATM_OPERATION(float);
char MAINTENANCE_CENTER_OPERATION(char, char *);
void SHINY_INTRO_COLOUR_GEN(void);
// UI.c
char MAIN_MENU(char, char *);
char SUB_MENU_REPEAT(char, bool, char *);
char MAINTENANCE_CENTER_MENU(char, char *);
char CELSIUS_FAHRENHEIT_MISCTOOL_MENU(char, char *);

#endif