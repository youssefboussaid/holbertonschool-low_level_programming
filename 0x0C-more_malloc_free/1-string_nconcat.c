#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * string_nconcat - concatenates two string
 *
 * @s1 : string 1
 * @s2 : string 2
 * @n  : first n bytes of s2
 * Return: pointer of the concatination of s1 and s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
		p = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		p = malloc(sizeof(char) * (len1 + n + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		p[i++] = s2[j];
	}
	p[i++] = '\0';
	return (p);
}
