#include "main.h"

/**
 * print_diagonal - prints Backslash (ASCII 92) n times, plus one Line feed (ASCII 10)
 * Description: when n is lower than 1, only prints a Line feed
 * @n: int
 * Return: void
 */
void print_diagonal(int n)
{
	char i;
	for (i = 1 ; i <= n ; i++)
	{
		_putchar(92);
	}
	_putchar(10);
}
