#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * @n: number
 * Return: void
 */
void print_numbers(void)
{
	int n =48;

	while (n > 47 && n < 58)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
