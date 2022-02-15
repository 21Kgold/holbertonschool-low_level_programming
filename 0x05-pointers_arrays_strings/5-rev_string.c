#include "main.h"
/**
* rev_string - reverses a string
* @s: char
* Return: void
*/

void rev_string(char *s)
{
	int a, b, c;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
	}
	b = a;
	for (c = b - 1 ; c >= 0 ; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
