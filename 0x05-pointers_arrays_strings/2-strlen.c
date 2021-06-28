#include "holberton.h"

/**
 * strlen - Write a function that returns the length of a string.
 * @s :pointer of a char
 *
 * Return: the lenght of the @str 
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	c++;
	return (c);
}
