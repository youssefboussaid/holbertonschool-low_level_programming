#include "holberton.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */

char *string_toupper(char *str);
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] > 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
return (str[i]);
}
