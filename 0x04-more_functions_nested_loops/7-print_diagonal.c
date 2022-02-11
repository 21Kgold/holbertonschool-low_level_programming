#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * Description: when n is lower than 1, only prints a Line feed
 * @n: int
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar(10);
	}
	else
		for (i = 1 ; i <= n ; i++)
		{
			for (j = 2 ; j <= i ; j++)
			{
				_putchar(32);
			}
		_putchar(92);
		_putchar(10);
		}
}
