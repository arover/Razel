#pragma once

#ifdef RAZEL_PLATFORM_WINDOWS
	#ifdef RAZEL_BUILD_DLL
		#define RAZEL_API __declspec(dllexport)
	#else
		#define RAZEL_API __declspec(dllexport)
	#endif
#else
	#error Razel only support windows.
#endif