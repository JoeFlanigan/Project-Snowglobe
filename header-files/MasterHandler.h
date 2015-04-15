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
	#define INCREMENT(x) (x++) 
	#define DECREMENT(x) (x--)								
	#define NULL_INITIALIZE (0)
	#define CLM (0)					
	#define CLN (2500)
	#define PI (3.14159265359)

	#define ATM_LIMIT_MIN (0)				
	#define ATM_LIMIT_MAX (759000)			
	#define ATM_OUTPUT_MIN_SG (0)
	#define ATM_OUTPUT_MAX_SG (2)
	#define ATM_OUTPUT_MAX_PL (1)

	#define CALC_SQUARE(x) ((x)*(x))
	#define CALC_ADDITION(X, Y) (((X) + (Y)))
	#define CALC_SUBTRACTION(X, Y) (((X) - (Y)))
	#define CALC_MULTIPLICATION(X, Y) (((X) * (Y)))
	#define CALC_DIVISION(X, Y) (((X) / (Y)))
	#define CALC_MODULO(X, Y) (((X) % (Y)))

	#define MAINTENANCE_DONT_OVERCLOCK (750)
#pragma endregion MISC

#pragma region SHORTCUTS
	#define ALN (ATM_LIMIT_MIN)
	#define ALM (ATM_LIMIT_MAX)
	#define AOSG (ATM_OUTPUT_MIN_SG)
	#define AOMSG (ATM_OUTPUT_MAX_SG)
	#define APL (ATM_OUTPUT_MAX_PL)
				#define DEC(x) (DECREMENT(x))
						#define INC(x) (INCREMENT(x))
							#define MDO (MAINTENANCE_DONT_OVERCLOCK)
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

#include "fnc_types.h"                                                     // fnc_types.h is the header we've wrote for this project to store our function prototypes somewhere and make them accessible all over the tool.
#include "D:/Server/Archive/VS/Project-Snowglobe-SDK/snowglobe_sdk.h"      // snowglobe_sdk.h is most likely the same as above. /* SDK = "Software Development Kit" */

#endif