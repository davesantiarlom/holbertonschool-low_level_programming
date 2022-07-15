#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
* print_all - A function prints anyting.
* @format: A list of type of arguments passed to the function.
* Return: Nothing
*/

void print_all(const char * const format, ...)
{
	va_list print_any;
	char *temp;
	int i = 0;

	va_start(print_any, format);

	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(print_any, int));
				break;
			case 'i':
				printf("%d", va_arg(print_any, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(print_any, double));
				break;
			case 's':
				temp = va_arg(print_any, char*);
				if (temp != NULL)
				{
					printf("%s", temp);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
  printf("\n");
	va_end(print_any);
}
