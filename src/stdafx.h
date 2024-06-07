// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>

// C RunTime Header Files
#include <malloc.h>
#include <memory.h>
#include <stdlib.h>
#include <tchar.h>

// reference additional headers your program requires here
#include <atlbase.h>
// atlbase.h MUST be included before other WTL header files
#include <atlapp.h>
#include <atlctrls.h>
#include <atlmisc.h>
#include <atlwin.h>

#include <include/cef_app.h>
#include <include/cef_base.h>
#include <include/cef_client.h>

#include "Message.h"
