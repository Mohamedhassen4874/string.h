#include "main.h"

void main()
{
    /*
    char myString[] = "mohamed hassan ahmed";
    int theCount = _strlen(myString);
    printf("%d\n", theCount);
    */

    /*
    char myChar = 'a';
    */

    char myChar1 = 'Z';
    bool isLower;
    isLower = _islower(myChar1);
    if (isLower)
        printf("The char is lowercase\n");
    else
        printf("The char is uppercase\n");
}