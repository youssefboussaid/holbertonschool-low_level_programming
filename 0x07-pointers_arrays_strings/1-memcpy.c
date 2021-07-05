#include "holberton.h"
#include <stdio.h>

/**
  * _memcpy - copies n characters from memory area src to memory area dest.
  * @dest: copies n characters from memory area src to memory area dest.
  * @src: This is pointer to the source of data to be copied
  * @n: This is the number of bytes to be copied
  * Return: This function returns a pointer to destination
  */

char *_memcpy(char *dest, char *src, unsigned int n)
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
