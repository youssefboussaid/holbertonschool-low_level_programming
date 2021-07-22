#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all integers given, variadic function
 * @n: number of arguments
 * @...: rest of arguments, presumed to be integers
 *
 * Return: sum of rest of arguments
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list list;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(list, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
