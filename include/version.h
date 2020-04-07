#ifndef BHOS_VERSION_INCLUDED
#define BHOS_VERSION_INCLUDED

#define MAKE_STR_HELPER(a_str) #a_str
#define MAKE_STR(a_str) MAKE_STR_HELPER(a_str)

#define BHOS_VERSION_MAJOR	1
#define BHOS_VERSION_MINOR	0
#define BHOS_VERSION_PATCH	0
#define BHOS_VERSION_BETA	0
#define BHOS_VERSION_VERSTRING	MAKE_STR(BHOS_VERSION_MAJOR) "." MAKE_STR(BHOS_VERSION_MINOR) "." MAKE_STR(BHOS_VERSION_PATCH) "." MAKE_STR(BHOS_VERSION_BETA)

#endif