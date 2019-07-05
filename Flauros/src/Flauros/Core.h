#pragma once

#ifdef _WIN64
	#ifdef _WINDLL
		#define FLAUROS_API __declspec(dllexport)
	#else
		#define FLAUROS_API __declspec(dllimport)
	#endif 
#else
	#error This platform is not supported!
#endif