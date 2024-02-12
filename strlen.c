#include<stdio.h>

int main()
{
    //int length=0;
    char *ptr;
    char string[]="mohamed hassan ahmed";  //20
    ptr=&string[0];
    while(*ptr != '\0')
    {
       // length++;
        ptr+=1;
    }
    // printf("%d\n",length);
    printf("%d\n",(ptr-string));
}
