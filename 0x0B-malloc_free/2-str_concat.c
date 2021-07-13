#include <stdlib.h>
/**
 * str_concat - concatenates two string
 *
 * @s1 : string 1
 * @s2 : string 2
 *
 * Return: pointer of the concatination of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, len = 0, len1 = 0, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len])
	{
		len++;
	}
	while (s2[len1])
	{
		len1++;
	}
	p = malloc(sizeof(char) * (len + len1 + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		p[j] = s1[i];
	for (i = 0; s2[i]; i++)
		p[j] = s2[i];
	return (p);
}
