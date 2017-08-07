#ifndef __CLIB_STRING_H
#define __CLIB_STRING_H

#include "clib.h"

int strlen(char[]);
char * strcat(char * dest, const char *src);
void strcpy(char*, char*);
void strncpy(char*, char*, int);

char * __cio_pchar_p;

#endif

