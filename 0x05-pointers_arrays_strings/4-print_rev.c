#include "main.h"
/**
* print_rev - prints a string, in reverse, followed by a new line
* @s: char
* Return: void
*/

void print_rev(char *s)
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
