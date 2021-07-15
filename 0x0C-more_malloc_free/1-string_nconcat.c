#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from second string
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;
		p = malloc(sizeof(char) * (len1 + n + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++)
		p[i++] = s2[j];
	p[i] = '\0';
	return (p);
}
