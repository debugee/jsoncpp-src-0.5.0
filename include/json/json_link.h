#pragma once

#ifdef _DEBUG
	#ifdef _DLL
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smdd_libjson.lib")
		#elif MSVC_TOOLSET_VERSION == 140
			#pragma comment(lib, "v14_smdd_libjson.lib")
		#endif
	#else
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smtd_libjson.lib")
		#elif MSVC_TOOLSET_VERSION == 140
			#pragma comment(lib, "v14_smtd_libjson.lib")
		#endif
	#endif
#else
	#ifdef _DLL
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smd_libjson.lib")
		#elif MSVC_TOOLSET_VERSION == 140
			#pragma comment(lib, "v14_smd_libjson.lib")
		#endif
	#else
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smt_libjson.lib")
		#elif MSVC_TOOLSET_VERSION == 140
			#pragma comment(lib, "v14_smt_libjson.lib")
		#endif
	#endif
#endif
