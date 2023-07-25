#pragma once

#ifdef _DEBUG
	#ifdef _DLL
		#if _MSC_VER == 1800
			#pragma comment(lib, "v12_smdd_libjson.lib")
		#elif _MSC_VER == 1900
			#pragma comment(lib, "v14_smdd_libjson.lib")
		#endif
	#else
		#if _MSC_VER == 1800
			#pragma comment(lib, "v12_smtd_libjson.lib")
		#elif _MSC_VER == 1900
			#pragma comment(lib, "v14_smtd_libjson.lib")
		#endif
	#endif
#else
	#ifdef _DLL
		#if _MSC_VER == 1800
			#pragma comment(lib, "v12_smd_libjson.lib")
		#elif _MSC_VER == 1900
			#pragma comment(lib, "v14_smd_libjson.lib")
		#endif
	#else
		#if _MSC_VER == 1800
			#pragma comment(lib, "v12_smt_libjson.lib")
		#elif _MSC_VER == 1900
			#pragma comment(lib, "v14_smt_libjson.lib")
		#endif
	#endif
#endif
