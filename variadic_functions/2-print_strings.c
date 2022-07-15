#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - fills memory with a constant byte
* @separator: is string
* @n: the amount of args
* Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print_string;
	unsigned int i;
	char *str;

	va_start(print_string, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(print_string, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print_string);
}
