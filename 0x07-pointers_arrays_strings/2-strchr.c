#include "holberton.h"

/**
  * _strchr -  locates a character in a string
  * @s: pointer to a string
  * @c: the char we want to find in s
  *
  * Return: the first occurrence of c in s or null if not found
  */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if *s == c
			return (s);
		s++;
	}
	return (NULL);
}
