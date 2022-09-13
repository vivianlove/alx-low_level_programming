#include "main.h"
/**
* _isalpha - Check Holberton
* @c: An input character
* Description: function returns 1 if the characteris a 
* letter, lowercase or uppercase.
*/
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;
	for (lower ='a'; lower <= 'z'; lower++0)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
		      if (c ==lower || c == upper)
		             isletter = 1;	 
		}
}
return (isletter);
	
