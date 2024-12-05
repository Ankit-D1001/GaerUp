#pragma once

#ifdef  GP_PLATFORM_WINDOWS
	#ifdef GP_BUILD_DLL
		#define GP_API _declspec(dllexport)
	#else
		#define GP_API _declspec(dllexport)
	#endif // GP_BUILD_DLL

#else
	#error GearUp only support windows

#endif // ! GP_PLATFORM_WINDOWS
