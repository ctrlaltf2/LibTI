#ifndef __CLIB_STRING_C__
#define __CLIB_STRING_C__

#include "string.h"

int strlen(char s[]) {
	#define i __clib__i

	i = 0;
	while(s[i] != '\0')
		++i;
	return i;

	#undef i
}

char * strcat(char * dest, const char *src) {
    // Doesn't work at all
    // Can piggyback on strcpy by calling strcpy(dest + strlen(dest), src)
    char * p = dest;
    
    while(*p)
        p++;
    while((*p++ = *src++));
    return dest;
}

void strcpy(char* dest, char* source) {
	/*int i = 0; //In this kind of function we want to avoid var reuse collision
	while(1) {
		dest[i] = source[i];
		if(dest[i] == '\0')
			break;
		++i;
	}*/
    // Also needs testing (Should work though)
    while((*dest++ = *source++));
    return;
}

void strncpy(char* dest, char* source, int length) {
    // Needs testing
	while(length --> 1) // XXX Off by one or not?
		*dest++ = *source++;
	*dest++ = '\0';
}

#endif
