#include "main.h"
/**
* print_sign - Check Holberton
* @n: An input number
*Return 0
*/
int print_sign(int n)
{
	if (n > 0)
	{	
	_putchar('+');
	return (1);
}
	else if (n < 0)
	{
	-putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return(0);
	}
}

