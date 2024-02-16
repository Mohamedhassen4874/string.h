#include<string.h>
#include"_strcmp.h"


int _strcmp(char *str1,char *str2)
{
    char *ptr1,*ptr2;
    ptr1=str1;
    ptr2=str2;
    while(1)
    {
        if(*ptr1 == *ptr2)
        {
            ptr1++;
            ptr2++;
            if(*ptr1=='\0' && *ptr2=='\0')
                {
                    return 0;
                    break;
                }
            else if(*ptr1=='\0')
            {
                return -1;
                break;
            }
            else if (*ptr2=='\0')
            {
                return 1;
                break;
            }
        }

        else if (*ptr1 > * ptr2 )
        {
            return 1;
            break;
        }

        else
        {
            return -1;
            break;
        }
    }
}
