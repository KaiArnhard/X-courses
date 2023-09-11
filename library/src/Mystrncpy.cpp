#include "/home/arsenii/Projects/1lektos/headers/Mystring.h"

char *Mystrncpy(char *str ,const char *str1, size_t length)
{
    assert(str != 0 || str1 != 0);
    size_t counter = 0;

    do
    {
        str [counter] = str1 [counter];
        counter++;

    }  while ((counter < length) && (str1 [counter - 1] != '\0'));

    if (str1[counter] == '\0' && counter < length)
    {
        for (; counter < length; counter++)
        {
            str[counter] = '\0';
        }
    }

    return str;
}
