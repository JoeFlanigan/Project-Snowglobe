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
char atmMachine(char, bool, char *);
float atmInput(bool, char *);
int *atmOperation(float);
void atmOutput(int *, float);
// Auth.c
char *snowglobeAuthMe(bool);
char *snowglobeAuthMeUID(void);
char *snowglobeAuthMePW(void);
bool snowglobeAuthMeValidator(bool, char *, char *);
void snowglobeAuthMeWB(char *);
// BlackBox.c
void bbShort(void);
void bbLoading(char *);
void bbError(char *);
void bbSuccess(char *);
// Calc.c
char calc(char, bool, char *);
unsigned int calcInput(bool, char *);
char calcInputRop(bool, char *);
float calcOperation(unsigned int, char, unsigned int, float);
void calcOutput(unsigned int, char, unsigned int, float);
// Exit.c
unsigned int stdExit(char *);
// Input_Ctrl.c
void mmInputCtrl(char, char *); // main menu input ctrl
bool calcInputRopCtrl(char, bool, char *);
bool calcInputCtrl(unsigned int, bool, char *, int);
bool atmInputCtrl(float, bool, char *, int);
void mcmInputCtrl(char, char *); // maintenance center menu input ctrl
bool subRepeatCtrl(char, bool, char *);
void cfMiscToolsCtrl(char, char *); // celsius fahrenheit thingy
void miscToolsMenuCtrl(char, char *);
void miscToolsCtrl(char, char *);
// Intro.c
void shinyIntro(void);
// MaintenanceCenter.c
char maintenanceCenter(char, bool, char *);
void connectionRepair(char *);
void diskRepairScan(char *);
void diskRepairOp(char *);
// Misc.c
void checkforBool(char *);
void Titles(char *);
void snowglobeAuthMeTitles(void);
char ovInputLower(char);
char setTime(char [100]);
void miscError(const char *, const char *); // #404
char calcInputRopLower(char);
void colourGen(void);
// MiscTools.c
char celfahMiscTool(char, bool, char *);
char multiplicationTable(char *, char);
char repeatMe(char, char *);
char markAverageSum(char, char *);
// Operation.c
char primaryOp(char, bool, char *);
char mcOp(char, char *); // maintenance center operation
char miscToolsOp(char, char *, bool);
// UI.c
char mainMenu(char, char *);
char subMenuRepeat(char, bool, char *);
char mcMenu(char, char *); // Maintenance center
char cfMenu(char, char *); // Celsius Fahrenheit
char miscToolsMenu(char, bool, char *);

#endif