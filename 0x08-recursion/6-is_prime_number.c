#include "holberton.h"

/**
 * is_prime_nember - it looks if the number is prime or not
 * @n: an integer
 * Return: 1 if true 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2 || n % 2 != 0)
		return (1);
	else if (n != 2 && n % 2 = 0)
		return (0);
	else 
		return (is_prime_number(n - 1));
}
