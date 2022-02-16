#include "main.h"
/**
* puts_half - prints half of a string, followed by a new line
* Description: If the number of characters is odd, the function should print
* the last n characters of the string, where n = (length_of_the_string - 1) / 2
* @str: char
* Return: void
*/

void puts_half(char *str)
{
	int a, b, c;

	for (a = 0 ; str[a] != '\0' ; a++)
	{
	}
	c = a;
	for (b = 0 ; b < c ; b++)
	{
		if (c % 2 != 0)
		{
			if (b >= ((c - 1) / 2))
			{
				_putchar(str[b]);
			}
		}
		if (c % 2 == 0)
		{
			if (b >= (c / 2))
			{
				_putchar(str[b]);
			}
		}
	}
	_putchar('\n');
}
