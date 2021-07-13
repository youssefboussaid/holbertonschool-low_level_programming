#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the char
 * @c: character
 *
 * Return: null or the pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}
