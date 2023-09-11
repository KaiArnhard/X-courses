#include "/home/arsenii/Projects/1lektos/headers/Mystring.h"

char *Mystrncat (char *str, const char *str1, size_t sizestr)
{
    int sizestr1 = Mystrlen(str);

    Mystrncpy (&(str[sizestr1]), str1, sizestr);

    return str;
}
