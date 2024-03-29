#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number
 * Return: return 1 if n is greater than 0, 0 if 0 and -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
