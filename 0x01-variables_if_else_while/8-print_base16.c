#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int dg;

	for (dg = '0x' ; dg <= 'Fx' ; dg++)
	{
		putchar(dg);
	}
	putchar ('\n');
	return (0);
}
