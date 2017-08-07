#include "../src/libti.c" //I'd include the actual header file if sdcc handled multiple source files... Until then multiple source files will become one like this

void main() {
    char * a = (char *) "Hello, ";
    char * b = (char *) "World!";
    char buff[16];

    clearscreen(); //If you don't clear the lcd first, you'll have some nice artifacts but no text.
//    itoa(c, b);
    
    strcat(buff, a);
    strcat(buff, b);
    println(buff);
    // Crashes here?
    strcpy(a, buff);
    println(buff);
    strncpy(a, buff, 2);
    println(buff);

    getKey();
}
