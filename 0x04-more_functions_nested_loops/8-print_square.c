#include "main.h"

/**
 * print_square - prints size times # for size lines
 * @size: int, square side
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
	}
	for (i = 1 ; i <= size ; i++)
	{
		for (j = 1 ; j <= size ; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}
