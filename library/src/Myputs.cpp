#include "/home/arsenii/Projects/1lektos/headers/Mystring.h"

int Myputs(const char *str)
{
    for (int symbol = 0; str[symbol] != '\0'; symbol++)
    {
         if (putchar(str[symbol]) == EOF)
         {
            return EOF;
         }
    }

    putchar('\n');

    return 1;
}

