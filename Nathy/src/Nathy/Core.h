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

#ifdef NY_ENABLE_ASSERTS
	#define NY_ASSERT(x, ...) { if (!(x)) {NY_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define NY_CORE_ASSERT(x, ...) { if (!(x)) {NY_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define NY_ASSERT(x, ...)
	#define NY_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)
