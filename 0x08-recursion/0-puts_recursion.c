#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: The string to be printed
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		 _putchar(*s);
		 _puts - recurssions(s + 1);
	}
	else
		_putchar('\n');
}