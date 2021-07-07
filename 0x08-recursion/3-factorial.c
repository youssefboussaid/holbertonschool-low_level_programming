#include "holberton.h"

/**
 * factorial- Returns the factorial of a number
 * @n: an integer
 * Return: the factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
