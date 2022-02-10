#include "main.h"

/**
 * jack_bauer - prints minutes from 00:00 to 23:59
 * Return: zero
 */
void jack_bauer(void)
{	
	int a = 0;
	int b = 0;
	int d = 0;
	int e = 0;
	
for (a = '0' ; a < '3' ; a++)
	{
		for (b = '0' ; b <= '9' ; b++)
		{
			for (d = '0' ; d < '6' ; d++)
			{
				for (e = '0' ; e <= '9' ; e++)
				{
					if ((a == '2' && b < '4') || (a < '2'))
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(d);
						_putchar(e);
						_putchar('\n');
					}
				}
			}
		}
	}
}
