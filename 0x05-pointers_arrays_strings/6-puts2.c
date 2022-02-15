#include "main.h"
/**
* puts2 - prints every other character of a string, followed by a new line
* @str: char
* Return: void
*/

void puts2(char *str)
{
	int a, b;

	for (a = 0 ; str[a] != '\0' ; a++)
	{
	}
	b = a;
	for (b = 0 ; b < a ; b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
