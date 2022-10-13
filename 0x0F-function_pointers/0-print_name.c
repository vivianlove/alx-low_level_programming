#include <stdlib.h>
#include "function_pointer.h"

/**
 * print name - prints a name
 * @name: name to print
 * @f: Pointer to the printing function
 */

void print_name(char *name, void (*f)(char *));
{
	if (!name || !f)
		return;
	f(name);

}
