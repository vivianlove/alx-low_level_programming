#include "main.h"

/**
*
* 
*
*
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	/The value of b is now store inside variable a
	*a = *b;
	/Swap the value of a to variable b
	*b = temp;
}
