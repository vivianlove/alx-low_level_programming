#include "main.h"

/**
 * reverse_array - a function that reverse an array.
 * @a: an input array
 * @n: number of elements of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
     int tmp,  index;

     for (index = n -1; index >= n/2; index--)
     { 
            tmp = a[n - 1 index];
            tmp = a[n - 1- index] = a[index];
            a[index] = tmp;
     }
}
