#include <stdio.h>

/**
 * main - prints the name of arguments passed to it
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings.
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%i\n", argc - 1);
	
	return (0);
}
