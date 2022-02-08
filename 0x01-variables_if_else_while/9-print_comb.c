#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int dg;

	for (dg = '0' ; dg <= '9' ; dg++)
	{
		putchar("0%d", dg);
	}
	for (dg = '10' ; dg <= '99' ; dg++)
	{
		putchar (dg);
	}
	putchar ('\n');
	return (0);
}
