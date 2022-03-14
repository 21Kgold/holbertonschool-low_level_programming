#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * Return: -returns the sum of all its parameters, 0 if n is NULL
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list data;

	va_start(data, n);
	for (i = 0 ; i < n ; i++)
	{
		sum = sum + va_arg(data, int);
	}
	va_end(data);
	return (sum);
}
