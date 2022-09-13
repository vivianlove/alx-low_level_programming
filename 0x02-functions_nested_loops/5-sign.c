#include "main.h"

/**
* print_sign - Check Holberton
* @c: An input number
* Description: Tohis function prints the sign of the number
* Return: 1 if number is positive, 0 if number is 0, or
* -1 if number is negativ
*/
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
	        _putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		-putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}

