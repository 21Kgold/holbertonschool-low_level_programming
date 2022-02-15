#include "main.h"
/**
* puts2 - prints every other character of a string, followed by a new line
* @*str: char
* Return: void
*/

void puts2(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
