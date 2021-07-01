#include "holberton.h"

/**
 * _strcmp - Write a function that compares two strings.
 *
 * @s1:pointer to a cher
 * @s2 : pointer to a char
 * Return: false or true
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*strg1 - *strg2);
	}
}
