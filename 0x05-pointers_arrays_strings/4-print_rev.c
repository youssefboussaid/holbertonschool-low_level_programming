#include "holberton.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */

void print_rev(char *s)
{
	while(*s)
		*s++;
	while(*s)
		_putchar(*s--);
}
