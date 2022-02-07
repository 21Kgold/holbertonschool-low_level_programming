#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char ch;
	upchar uc;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (uc = 'A' ; uc <= 'Z' ; ch++)
	{
		putchar(uc);
	}
	putchar ('\n');
	return (0);
}
