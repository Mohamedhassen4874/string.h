#include "main.h"

/**
 * _strlen - A function to get the length of the string
 * @myString: A pointer to the string
 * Return: the length of the string
*/ 

int _strlen(char *myString)
{
    int myCount = 0;
    while (*myString != '\0')
    {
        myCount++;
        myString++;
    }
    return (myCount);
}