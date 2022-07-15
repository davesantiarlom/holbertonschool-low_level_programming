#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* sum_them_all - A function that sums all its parameters.
* @n: number of parameters
* @...: Other parameters
* Return: The of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_par;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(sum_par, n);
	for (; i < n; i++)
		sum += va_arg(sum_par, int);
	va_end(sum_par);
	return (sum);
}
