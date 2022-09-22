#include "main.h"
#include <unistd.h>

/**
 * _putcahr - writed the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno 0 set appropriately.
 */
int _putchar.c(char c)
{
		return(write(1, &c, 1));
}
