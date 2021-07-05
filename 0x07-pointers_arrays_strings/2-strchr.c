#include "holberton.h"
int _strlen(char *s);
/**
  * _strchr -  locates a character in a string
  * @s: pointer to a string
  * @c: the char we want to find in s
  *
  * Return: the first occurrence of c in s or null if not found
  */

char *_strchr(char *s, char c)
{
	int i;
	int len = _strlen(src);

	for (i = 0; i <= len ; i++)
	{
		if (s[i] == c)
			return (s);
		else
			return (NULL);
	}
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
