#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'd' ; ch = 'f' ; ch <= 'p' ; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}
