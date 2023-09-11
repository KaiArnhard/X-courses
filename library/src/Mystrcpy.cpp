#include "/home/arsenii/Projects/1lektos/headers/Mystring.h"

char* Mystrcpy(char *str,const char *str1)
{
    int counter = 0;
    do
    {
        str[counter] = str1[counter];
        counter++;

    } while (str1[counter - 1] != '\0');

    return str;
}
