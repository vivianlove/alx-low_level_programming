#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: The string to be printed
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s)
		_puts_recursion(s);
	{
		_putchar(*s);
		_puts_recursion(s + 1);

	}

	if else

		putchar('\n');
