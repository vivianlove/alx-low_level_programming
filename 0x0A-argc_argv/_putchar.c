#include <unistd.h>

/**
 * -putchar - writes the character c to stdout
 *@c: on success 1
 *
 * Return: on success 1
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
