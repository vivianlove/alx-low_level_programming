#include "main.h"
/**
* _islower -print a function that checks for lowercase character.
*  @c: An input character
*  alphabet in lowercase 10 times
*  Return: 1 if is lowercase or 0 if is uppercase
*/
int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
                return (1);
        else
                return (0);

}

