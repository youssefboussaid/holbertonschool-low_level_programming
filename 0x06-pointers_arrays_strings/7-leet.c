#include "holberton.h"

/**
 * leet - Write a function that encodes a string into 1337.
 * @str: The string to be reversed.
 * Return: a pointer to the encoded string
 */

char *leet(char *str)
{
	int i = 0;
	int j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			 if (str[i] == lett[j] || str[i] - 32 == lett[j])
				str[i] = j + '0';
		}

		i++;
	}
	return (str);
}
