#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * @c: The character to print
 *
 * Return: 1 if upper case found else 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);

	}
	else
		return (0);
}
