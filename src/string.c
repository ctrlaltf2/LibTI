#ifndef __CLIB_STRING_C__
#define __CLIB_STRING_C__

int strlen(char s[]) {
	#define i __clib__i

	i = 0;
	while(s[i] != '\0')
		++i;
	return i;

	#undef i
}

char * strcat(char * dest, const char *src) {
    strcpy(dest + strlen(dest), src);
    return dest;
}

void strcpy(char* dest, char* source) {
	int i = 0; //In this kind of function we want to avoid var reuse collision
	while(1) {
		dest[i] = source[i];
		if(dest[i] == '\0')
			break;
		++i;
	}
}

void strncpy(char* dest, char* source, int length) {
	int i = 0; //In this kind of function we want to avoid var reuse collision
	for(i = 0; i < length; ++i) {
		dest[i] = source[i];
	}
	dest[i] = '\0';
}

#endif
