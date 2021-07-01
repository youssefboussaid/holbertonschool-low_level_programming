#include "holberton.h"
/**
 * reverse_array - Write a function that concatenates two strings.
 *
 * @a :pointer to an int
 * @n : size of the array
 * Return: always void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int b;

	while (i < n - 1)
	{
		b = a[n - 1];
		a[n - 1] = a[i];
		a[i] = b;
		i++;
		n--;
	}
}
