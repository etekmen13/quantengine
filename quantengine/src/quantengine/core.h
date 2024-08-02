#pragma once

#ifdef QE_PLATFORM_WINDOWS
	#ifdef QE_BUILD_DLL
		#define QE_API __declspec(dllexport)
	#else
		#define QE_API __declspec(dllimport)
	#endif // QE_BUILD_DLL
#else
	#error Quant Engine only supports Windows!
#endif // QE_PLATFORM_WINDOWS