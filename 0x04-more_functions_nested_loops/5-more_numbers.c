#include "main.h"

/**
 * more_numbers - prints 10 times: 0 to 14 + new line
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int d = 0;
	int u = 0;
	
	for (i = '0' ; i <= '9' ; i++)
	{
		for (d = '0' ; d < '2' ; d++)
		{
			for (u = '0' ; u <= '9' ; u++)
			{
				if (d == '1' && u < '5')
				{
				_putchar(d);
				}
				if ((d == '0' && u < '9') || (d == '1' && u < '5'))
				{
				_putchar(u);
				}
			}
		}
	_putchar('\n');
	}
}
