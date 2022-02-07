#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char ch;
	char che;

	for (ch = 'a' ; ch <= 'd' ; ch++ && che = 'f' ; che <= 'p' ; che++)
	{
		putchar(ch, che);
	}
	putchar ('\n');
	return (0);
}
