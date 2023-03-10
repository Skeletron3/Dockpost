#ifndef Dockpost_config_header_
#define Dockpost_config_header_

#ifndef Dockpost_OperatingSystem // If operating system is not defined automatically detect it
	#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
		#define Dockpost_OperatingSystem "Windows"
	#elif __linux__
		#define Dockpost_OperatingSystem "Linux"
	#elif __unix__
		#define Dockpost_OperatingSystem "Unix"
	#elif defined(_POSIX_VERSION)
		#define Dockpost_OperatingSystem "Posix"
	#endif
#endif

#if defined(__clang__)
	#warning You are using clang and not GCC. Clang is not officially supported
	#define Dockpost_Compiler "Clang"
#elif defined(__GNUC__) || defined(__GNUG__)
	#define Dockpost_Compiler "GCC"
	#if __GNUC__ != 12 // Recommended compiler version
	#warning You are not using GCC 12.
	#endif
#else
	#warning Uknown compiler
	#define Dockpost_Compiler "Uknown"
#endif

#endif // Heaser