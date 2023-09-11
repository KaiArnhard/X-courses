#include "/home/arsenii/Projects/1lektos/headers/Mystring.h"

char *Mystrdup(const char *str)
{
    size_t length = Mystrlen(str);
   char *str1 = (char*) calloc(length, sizeof(char));
   Mystrncpy(str1, str, length);
   return str1;
}
