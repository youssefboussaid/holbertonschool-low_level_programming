#include "holberton.h"
int _strlen(char *s);

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void print_rev(char *s)
{
	int c;
	int len = _strlen(s);

	for (c = len-1 ; c >= 0 ; c-- )
		_putchar(s[c]);
	_putchar('\n');
}

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	c++;
	return (c);
}
