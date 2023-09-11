#include "/home/arsenii/Projects/1lektos/headers/Mystring.h"

char *Mystrcat (char *str1, const char* str2)
{
    int sizestr1  = Mystrlen(str1);

    Mystrcpy (&(str1[sizestr1]), str2);

    return str1;
}


