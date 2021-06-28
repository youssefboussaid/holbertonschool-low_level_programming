#include "holberton.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	c++;
	return (c);
}
