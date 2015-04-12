#ifndef __MasterHandler_H__
#define __MasterHandler_H__

#pragma warning(disable:4996 4047 24 28 13)

// Preprocessor directives

#define MISC_REGION(x) PPST(x)
	#if defined(WIN32) && !defined(UNIX)
		#include <Windows.h>
		#pragma message ( " WIN32 API, confirmed. Code will be probably optimized during compilation process based on WIN32 specifications. " )
	#elif defined(UNIX) && !defined(WIN32)
		#error Error: UNIX OS is not supported (yet). Contact the author of this tool for support.
		// #include <unistd.h>
		// #pragma message ( " UNIX OS, confirmed. Code will be probably optimized during compilation process based on UNIX specifications. " )
	#else
		#error Error: both cannot be defined or undefined at the same time (UNIX & WIN32)
	#endif
	#define entryPoint(m, a, i, n) m##a##i##n
	#define SNOWGLOBE entryPoint(m, a, i, n)
	#define PPST(x) #x									
		#define TO_STRING(x) PPST(x)					
			#define ERR __FILE__ ":" TO_STRING(__LINE__)
		#define EXIT (2000)						
			#define AU (EXIT)
	#define INCREMENT(x) (x++) 
		#define INC(x) (INCREMENT(x))
	#define DECREMENT(x) (x--)
		#define DEC(x) (DECREMENT(x))
	#define BLACKBOX (2500)											// Outdated V0.2
		#define BB (BLACKBOX)										
	#define BBERROR (4250)											// Outdated V0.2
		#define BE (BBERROR)										// Outdated V0.2
	#define NULL_INITIALIZE (0)
		#define NI (NULL_INITIALIZE)
	#define INTRO_SNOWGLOBE (1250)
		#define ISG (INTRO_SNOWGLOBE)
	#define INTRO_SNOWGLOBE_LONG (2000)
		#define ISG_L (INTRO_SNOWGLOBE_LONG)

#define AUTH_REGION(x) PPST(x)
//	#define AUTH_ADMIN_ID (JoeFlanigan:ID001)
//	#define AUTH_ADMIN_PW (AUTH_PW:ID001)

#define ATM_REGION(x) PPST(x)
	#define ATM_LIMIT_MIN (0)				
		#define ALN (ATM_LIMIT_MIN)
	#define ATM_LIMIT_MAX (759000)			
		#define ALM (ATM_LIMIT_MAX)
	#define ATM_OUTPUT_MIN_SG (0)
		#define AOSG (ATM_OUTPUT_MIN_SG)
	#define ATM_OUTPUT_MAX_SG (2)
		#define AOMSG (ATM_OUTPUT_MAX_SG)
	#define ATM_OUTPUT_MAX_PL (1)
		#define APL (ATM_OUTPUT_MAX_PL)

#define CALC_REGION(x) PPST(x)
	#define PI (3.14159265359)					// Uh, PI. What else did you expect de moi?
	#define CALC_SQUARE(x) ((x)*(x))			// The proper way to square..., yeah... still using pow(); shame on you Joey... :3
		#define CS (CALC_SQUARE)
	#define CALC_LIMIT_MIN (0)					
		#define CLN (CALC_LIMIT_MIN)
	#define CALC_LIMIT_MAX (2500)		
		#define CLM (CALC_LIMIT_MAX)

#define MAINTENANCE_CENTER_REGION(x) PPST(x)
	#define MAINTENANCE_DONT_OVERCLOCK (750)
		#define MDO (MAINTENANCE_DONT_OVERCLOCK)

#define MISCTOOLS_REGION(x) PPST(x)
	#define CELSIUS_TO_FAHRENHEIT(x) ((x) * 1.8 + 32 )
		#define CTF(x) (CELSIUS_TO_FAHRENHEIT(x))
	#define FAHRENHEIT_TO_CELSIUS(x) ((x - 32) / 1.8)
		#define FTC(x) (FAHRENHEIT_TO_CELSIUS(x))
	#define CELSIUS_MINIMUM_INPUT (0)
		#define CMI (CELSIUS_MINIMUM_INPUT)
	#define CELSIUS_MAXIMUM_INPUT (299)
		#define CMXI (CELSIUS_MAXIMUM_INPUT)
	#define FAHRENHEIT_MINIMUM_INPUT (0)
		#define FMI (FAHRENHEIT_MINIMUM_INPUT)
	#define FAHRENHEIT_MAXIMUM_INPUT (759)
		#define FMXI (FAHRENHEIT_MAXIMUM_INPUT)

// Including Headers from the C-library

#include <assert.h>								// assert() to perform runtime checks O:
#include <stdlib.h>								// C Standardlibrary, includes ... well, it's the standard library
#include <stdbool.h>							// bool  in C! Yay! (many hugz) TRUE, FALSE!! :D come at me bro', missed ya'
#include <math.h>								// math.h for functions like pow(x1, x2); we will need for our Calculator. /* Calc.c */
#include <conio.h>                              // conio.h contains useful functions, we will use, like "getche();" as advanced input method(s).
#include <stdio.h>								// stdio.h is the "Standard-Input-Output" library we will use. /* contains : scanf(); as well printf(); function(s) */

// Including our own Header(s)

#include "fnc_types.h"							// fnc_types.h is the header we've wrote for this project to store our function prototypes somewhere and make them accessible all over the tool.
#include "snowglobe_sdk.h"						// snowglobe_sdk.h is most likely the same as above. /* SDK = "Software Development Kit" */

#endif
