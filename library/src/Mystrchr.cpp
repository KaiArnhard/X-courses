#include "/home/arsenii/Projects/1lektos/headers/Mystring.h"

const char* Mystrchr(const char *str, int symbol)
{

    for (int counter = 0; str[counter] != '\0'; counter++)
    {
        if (str[counter] == symbol)
        {
            return (str + counter);
        }
    }

    return NULL;
}
