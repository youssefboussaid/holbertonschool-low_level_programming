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
	int f = 0;

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			f = 1;
			break;
		}
	s1++;
	s2++;
	}
if (f == 0)
	return (0);
else
	return (-1);
}
