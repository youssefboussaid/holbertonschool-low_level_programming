#include <stdio.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{

	va_list list;
	unsigned int i;
	int sum;

	va_start (list , n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return(sum);
}
