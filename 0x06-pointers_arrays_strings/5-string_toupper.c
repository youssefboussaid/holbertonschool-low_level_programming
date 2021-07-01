#include "holberton.h"

/**
 * string_toupper - Reverses a string.
 * @s: The string to b
 * Return : uppercase string
 */
char *string_toupper(char *str);
{
	int i;
	
	for (i = 0; *str != '\0' i++)
	{
	       	if (*str> 'a' && *str <='z)
			*str = *str - 32;
	}
return (*str);
}
