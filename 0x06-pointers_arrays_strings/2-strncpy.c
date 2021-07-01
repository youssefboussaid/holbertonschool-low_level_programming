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
       int dlen = 0;	
	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0 ; i <= dlen ; i++)
	{
		src[i] = dest[i];
	}	
	src[dlen] = '\0';
	retunr (src);
}
