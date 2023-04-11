#pragma once

#ifdef HL_PLATFORM_WINDOWS

	#ifdef HL_BUILD_DLL
		#define HELIOS_API __declspec(dllexport)
	#else
		#define HELIOS_API __declspec(dllimport)
	#endif
#else
	#error Helios only support Windows
#endif