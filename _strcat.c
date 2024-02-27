#include "_string.h"

char *_strcat(char *dest, const char *src)
{
    if (dest == NULL || src == NULL)
        return (NULL);
    char *dest_string_start = dest;
    while (*dest)
        dest++;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
}
