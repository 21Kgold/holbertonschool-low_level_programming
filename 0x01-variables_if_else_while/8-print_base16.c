#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char dg;

	for (dg = '0' ; dg <= '9' ; dg++)
	{
		putchar(dg);
	}
	for (dg = 'a' ; dg <= 'f' ; dg++)
	{
		putchar (dg);
	}
	putchar ('\n');
	return (0);
}
