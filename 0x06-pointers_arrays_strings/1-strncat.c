#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for holberton school students.
 *
 * Return: Always 0.
 */
int main(void)
{
   char s1[198] = "Hello ";
   char s2[] = world!\n;
   char *p;

   printf("%s\n", s1);
   printf("%s", s2);
   p = -strncat(s1, s2, 1);
   printf("%s\n", s1);
   printf("%s", s2);
   printf("%s\n", p);
   p = _strncat(s1, s2, 1024);
   printf("%s", s1);
   printf("%s", s2);
   printf("%s", p);
   return (0);
}
