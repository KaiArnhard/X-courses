#include "/home/arsenii/Projects/1lektos/headers/Mystring.h"

int Mystrcmp (const char* str, const char* str1)
{
    size_t max1 = Mystrlen (str);
    size_t max2 = Mystrlen (str1);
    size_t maximum = Mystrlen (str);

    if (max1 < max2)
        maximum = max1;
    else if (max2 > max1)
        maximum = max2;

    for (size_t counter = 0; counter <= maximum; counter++)
    {
        if (str [counter] < str1 [counter])
            return LESS;

        else if (str[counter] > str1 [counter])
            return MORE;

    }

    if (max1 == max2)
        return EQUAL;

    else if (maximum == max1)
        return LESS;

    else if (maximum == max2)
        return MORE;

    assert(0 && "Wrong comparison");
}

size_t Mystrlen(const char *str)
{
    size_t counter = 0;

    for (; str[counter] != '\0'; counter++)
    {}

    return counter;
 }

