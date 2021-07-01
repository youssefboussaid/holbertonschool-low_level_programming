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
	while (*dest != '\0')
	{
		*src = * dest ;
		dest++;
		src++;
	}
	*src = '\0';
	retunr (src);
}
