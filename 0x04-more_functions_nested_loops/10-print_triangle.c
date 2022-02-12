#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line
 * @size: int, triangle size
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar(10);
	}
	for (i = 1 ; i <= size ; i++)
	{
		for (j = size ; j >= 1 ; j--)
		{
			if (j > i)
			{
				_putchar(32);
			}
			else
			_putchar(35);
		}
		_putchar(10);
	}
}
