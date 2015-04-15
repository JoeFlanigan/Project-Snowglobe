#ifndef __MasterHandler_H__
#define __MasterHandler_H__

//                       PJ; SNOWGLOBE -RB
//                   <===|===><==|==><===|===>
//                            
//     File Name            => MasterHandler.h
//     Author Name          => "Rebirth" aka "Joe Flanigan"
//                            
//     File Description	    => This file is giving orders to the preprocessor
//                             and is including other relevant headers during
//                             the compilation process...

#pragma warning(disable:4996)

// Preprocessor directives

#pragma region MISC
	#if defined(WIN32) && !defined(UNIX)
		#include <Windows.h>
		#pragma message ( " WIN32 API, confirmed. Code will probably be optimized during the compilation process based on WIN32 specifications. " )
	#elif defined(UNIX) && !defined(WIN32)
		#error Error: UNIX OS is not supported (yet). Contact the author of this tool for adding a multi-platform support.
		#include <unistd.h>
		#pragma message ( " UNIX OS, confirmed. Code will probably be optimized during the compilation process based on UNIX specifications. " )
	#else
		#error Error: both cannot be defined or undefined at the same time (UNIX & WIN32)
	#endif
	#define entryPoint(m, a, i, n) m##a##i##n
	#define SNOWGLOBE entryPoint(m, a, i, n)
	#define PPST(x) #x									
		#define TO_STRING(x) PPST(x)					
			#define ERR __FILE__ ":" TO_STRING(__LINE__)
	#define EXIT (2000)						
	#define INCREMENT(x) (x++) 
	#define DECREMENT(x) (x--)
	#define BLACKBOX (2500)									
	#define BBERROR (4250)
	#define NULL_INITIALIZE (0)
	#define INTRO_SNOWGLOBE (1250)
	#define INTRO_SNOWGLOBE_LONG (2000)
#pragma endregion MISC

#pragma region ATM
	#define ATM_LIMIT_MIN (0)				
	#define ATM_LIMIT_MAX (759000)			
	#define ATM_OUTPUT_MIN_SG (0)
	#define ATM_OUTPUT_MAX_SG (2)
	#define ATM_OUTPUT_MAX_PL (1)
#pragma endregion ATM

#pragma region CALC
	#define PI (3.14159265359)             // Uh, PI. What else did you expect de moi?
	#define CALC_SQUARE(x) ((x)*(x))       // still using pow(); and u got this here... shame on you Joey... :3
	#define CALC_LIMIT_MIN (0)					
	#define CALC_LIMIT_MAX (2500)
	#define CALC_ADDITION(X, Y) (((X) + (Y)))
	#define CALC_SUBTRACTION(X, Y) (((X) - (Y)))
	#define CALC_MULTIPLICATION(X, Y) (((X) * (Y)))
	#define CALC_DIVISION(X, Y) (((X) / (Y)))
	#define CALC_MODULO(X, Y) (((X) % (Y)))
#pragma endregion CALC

#pragma region MAINTENANCE
	#define MAINTENANCE_DONT_OVERCLOCK (750)
#pragma endregion MAINTENANCE

#pragma region MISCTOOLS
	#define CELSIUS_TO_FAHRENHEIT(x) ((x) * 1.8 + 32 )
	#define FAHRENHEIT_TO_CELSIUS(x) ((x - 32) / 1.8)
	#define CELSIUS_MINIMUM_INPUT (0)
	#define CELSIUS_MAXIMUM_INPUT (299)
	#define FAHRENHEIT_MINIMUM_INPUT (0)
	#define FAHRENHEIT_MAXIMUM_INPUT (759)
	#define MULTIPLICATION_TABLE (499)
#pragma endregion MISCTOOLS

#pragma region SHORTCUTS
	#define ALN (ATM_LIMIT_MIN)
	#define ALM (ATM_LIMIT_MAX)
	#define AOSG (ATM_OUTPUT_MIN_SG)
	#define AOMSG (ATM_OUTPUT_MAX_SG)
	#define APL (ATM_OUTPUT_MAX_PL)
	#define AU (EXIT)
		#define BB (BLACKBOX)
		#define BE (BBERROR)
			#define CA(X, Y) (CALC_ADDITION(X, Y))
			#define CLN (CALC_LIMIT_MIN)
			#define CLM (CALC_LIMIT_MAX)
			#define CM(X, Y) (CALC_MULTIPLICATION(X, Y))
			#define CMI (CELSIUS_MINIMUM_INPUT)
			#define CMXI (CELSIUS_MAXIMUM_INPUT)
			#define CS (CALC_SQUARE)
			#define CSB(X, Y) (CALC_SUBTRACTION(X, Y))
			#define CTF(x) (CELSIUS_TO_FAHRENHEIT(x))
				#define DEC(x) (DECREMENT(x))
				#define DIV(X, Y) (CALC_DIVISION(X, Y))
					#define FMI (FAHRENHEIT_MINIMUM_INPUT)
					#define FMXI (FAHRENHEIT_MAXIMUM_INPUT)
					#define FTC(x) (FAHRENHEIT_TO_CELSIUS(x))
						#define INC(x) (INCREMENT(x))
						#define ISG (INTRO_SNOWGLOBE)
						#define ISG_L (INTRO_SNOWGLOBE_LONG)
							#define MDO (MAINTENANCE_DONT_OVERCLOCK)
							#define MOD(X, Y) (CALC_MODULO(X, Y))
							#define MT (MULTIPLICATION_TABLE)
								#define NI (NULL_INITIALIZE)
#pragma endregion SHORTCUTS

// Including Headers from the C-library

#include <time.h>       // Used for our time function, surprise surprise. kek
#include <assert.h>     // assert() to perform runtime checks O:
#include <stdlib.h>     // C Standardlibrary, includes ... well, it's the standard library
#include <stdbool.h>    // bool  in C! Yay! (many hugz) TRUE, FALSE!! :D come at me bro', missed ya'
#include <math.h>       // math.h for functions like pow(x1, x2); we will need for our Calculator. /* Calc.c */
#include <conio.h>      // conio.h contains useful functions, we will use, like "getche();" as advanced input method(s).
#include <stdio.h>      // stdio.h is the "Standard-Input-Output" library we will use. /* contains : scanf(); as well printf(); function(s) */

// Including our own Header(s)

#include "fnc_types.h"          // fnc_types.h is the header we've wrote for this project to store our function prototypes somewhere and make them accessible all over the tool.
#include "snowglobe_sdk.h"      // snowglobe_sdk.h is most likely the same as above. /* SDK = "Software Development Kit" */

#endif