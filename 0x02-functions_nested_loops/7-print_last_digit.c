#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number
 * Return: last digit
 */
int print_last_digit(int n)
{	
	int dg = (n % 10);
	int ndg = -1 * (n % 10)
	
	if (n >= 0 )
	{
		return (dg);
		_putchar(dg + '0');
	}
	else
	{
		return (ndg);
		_putchar(ndg + '0');
	}
}
