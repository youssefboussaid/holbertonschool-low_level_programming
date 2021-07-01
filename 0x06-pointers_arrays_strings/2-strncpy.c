#include "holberton.h"

/**
 * _strcpy - Write a function that copies a string.
 *
 * @dest: pointer to a cher
 * @src: pointer to a chari
 * @n: integer 
 * Return: the copied string 
 */

char *_strncpy(char *dest, char *src, int n)
{
       int dleni1 = 0, dlen2 = 0;	
	while (dest[dlen1])
	{
		dlen1++;
	}
	while (dlen1 < n && src[dlen1])
	{
		dest[dlen1] = src[];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
