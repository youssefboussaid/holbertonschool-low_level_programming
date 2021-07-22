#include "variadic_functions.h"
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator == NULL)
		return (0);
	va_start (list, n);
	for (i = 0; i < n; i++)
		printf("%d", va_arg(list, int));
	va_end(list);
	return (0);
}
