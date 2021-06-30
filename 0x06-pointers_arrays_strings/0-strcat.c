#include "holberton.h"

/**
 * _strcat - Write a function that concatenates two strings.
 *
 * @src :pointer to a cher
 * @dest : pointer to a char
 * Return: dest+src
 */

char *_strcat(char *dest, char *src)
{
	int c, d;

	c = 0;
	while ( dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (src[d] != '\0')
	{
		dest[c] = src[d];
		d++;
		c++;
	}
		p[c] = '\0';
	return (dest);
}
