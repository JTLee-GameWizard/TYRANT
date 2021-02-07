#pragma once
#ifdef TYRANT_DLL_EXPT
	#define TYRANT_API _declspec(dllexport)
#else
	#define TYRANT_API _declspec(dllimport)
#endif // TYRANT_DLL_EXPT
