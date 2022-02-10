#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number
 * Return: last digit
 */
int print_last_digit(int n)
{
	int dg;

	if (n >= 0)
	{
		dg = n % 10;
		_putchar(dg + '0');
		return (dg);
	}
	else
	{
		dg = -1 * (n % 10);
		_putchar(dg + '0');
		return (dg);
	}
}
