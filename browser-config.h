#pragma once

#ifndef ON
#define ON true
#endif

#ifndef OFF
#define OFF false
#endif

#ifndef TRUE
#define TRUE true
#endif

#ifndef FALSE
#define FALSE false
#endif

#ifdef __APPLE__
#define CEF_LIBRARY "@CEF_LIBRARY@"
#endif

#ifdef _WIN32
#define EXPERIMENTAL_SHARED_TEXTURE_SUPPORT_ENABLED false
#else
#define EXPERIMENTAL_SHARED_TEXTURE_SUPPORT_ENABLED false
#endif
