#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: number
 * Return: null
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		int a;
		for (a = n ; a < 98 ; a++)
		{
			printf("%d", a);
			printf(", ");
		}
	}
	if (n > 98)
	{
		int a;
		for (a = n ; a > 98 ; a--)
		{
			printf("%d", a);
			printf(", ");
		}
	}
	printf("98");
	printf("\n");
}
