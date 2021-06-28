#include "holberton.h"

/**
 * swap_int - Write a function that swaps the values of two integers.
 *
 * @a :pointer to an int
 * @b : pointer to an int
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
