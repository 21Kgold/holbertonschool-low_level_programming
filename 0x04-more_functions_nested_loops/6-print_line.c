#include "main.h"

/**
 * print_line - Underscore (ASCII 95) n times, plus one Line feed (ASCII 10)
 * Description: when n is lower than 1, only prints a Line feed
 * @n: int
 * Return: void
 */
void print_line(int n)
{
	char i;

	for (i = 1 ; i <= n ; i++)
	{
		_putchar(95);
	}
	_putchar(10);
}
