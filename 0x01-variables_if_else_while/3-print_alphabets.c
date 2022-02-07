#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char ch;
	char uc;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (uc = 'A' ; uc <= 'Z' ; uc++)
	{
		putchar(uc);
	}
	putchar ('\n');
	return (0);
}
