#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name:string
 * @f: Pointer to the printing function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
