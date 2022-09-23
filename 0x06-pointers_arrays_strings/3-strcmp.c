#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: an input string
 * @s2: an input string
 * Return:  -15 if s1 < s2
 * 	      0 if s1 = s2
 * 	      15 if S1 > S2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;
	
	while (1)
	{
	       if (s1[i] == '\0' && s2[i] == '\0')
		       break;
	       else if (s1[i] == '\0')
	       {
		       diff = s1[i];
		       break;
		else if (s\[i] ! = s2{i] - s2[i]);
			break;
		}
		else
			i++;
	 }
	 return (diff);
}	 
