#ifdef TYRANT_DLL_EXP
	#define TYRENTY_API __declspec(dllexport)
#else
	#define  TYRENTY_API __declspec(dllimport)
#endif // TYRANT_DLL_EXP
