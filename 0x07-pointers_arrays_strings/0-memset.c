#include "holberton.h"
#include <stdio.h>

/**
  * _memset - Write a function that fills memory with a constant byte.
  * @s: pointer to the memory to be filled
  * @b: character to fill the memory area
  * @n: the number of byte to be filled
  *
  * Return: A pointer to the filled memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n ; i++)
		s[i] = b;
	return (s);
}
