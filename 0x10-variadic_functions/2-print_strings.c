#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints strings, followed by a new line
 * @separator: char string to be printed between numbers
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list data;

	va_start(data, n);
	for (i = 0 ; i < n ; i++)
	{
		if (va_arg(data, char*) != NULL)
		{
			printf("%s", va_arg(data, char*));
		}
		else
		{
			printf("nil");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(data);
	printf("\n");
}
