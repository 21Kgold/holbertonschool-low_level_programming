#include "main.h"

/**
 * times_table - Print a matrix [0..9]x[0..9]
 */
void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (c < 10 && b != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			if (c < 10)
				_putchar('0' + c);
			if (c > 9)
			{
				d = c / 10;
				e = c % 10;
				_putchar(44);
				_putchar(32);
				_putchar('0' + d);
				_putchar('0' + e);
			}
		}
		_putchar('\n');
	}
}
