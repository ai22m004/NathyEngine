#pragma once

#ifdef NY_PLATFORM_WINDOWS
	#ifdef NY_BUILD_DLL
		#define NATHY_API __declspec(dllexport)
	#else
		#define NATHY_API __declspec(dllimport)
	#endif
#else
	#error Nathy only supports WIN
#endif
