#include"_string.h"


int _strlen(char *str)
{
    char *ptr;
    ptr=str;
    while(*ptr != '\0')
        ptr++;

    return (ptr-str);

}
