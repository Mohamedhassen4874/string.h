#include "main.h"

/**
 * isLower - A function to check if lowercase
 * myChar: The char
 * Return: True or False
*/

bool _islower(char myChar)
{
    if (myChar >= 97 && myChar <= 122)
        return (true);
    return (false);
}