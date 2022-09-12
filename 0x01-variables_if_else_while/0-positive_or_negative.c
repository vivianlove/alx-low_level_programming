#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
*Return: Always Success
*/
int main(void)
{
int n;
Srand(time(0));
n= rand() - RAND_MAX /2;
lf (n > 0)
	printf("%d is positive\n", n);
else if (n == 0)
	printf(%d is zero\n", n);
else
	printf(%d is negative\n", n);
return (0)
}
