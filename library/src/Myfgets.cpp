#include "/home/arsenii/Projects/1lektos/headers/Mystring.h"

char *Myfgets (char *str, int sizestr, FILE *fp)
{
    int counter = 0;

    for (; counter < sizestr; counter++)
        {

            if ((str[counter] = fgetc(fp)) == '\n')
                {
                    str[counter] = '\0';
                    return str;
                }

        }
    str [counter] = '\0';

    return str;
}
