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
       char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
