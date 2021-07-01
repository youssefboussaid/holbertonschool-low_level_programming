#include "holberton.h"

/**
 * _strcat - Write a function that concatenates two strings.
 *
 * @src :pointer to a cher
 * @dest : pointer to a char
 * Return: dest+src
 */

char *strcat(char *dest, const char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
