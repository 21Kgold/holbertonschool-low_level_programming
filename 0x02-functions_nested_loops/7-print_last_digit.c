#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number
 * Return: last digit
 */
int print_last_digit(int n)
{	
	int dg = (n % 10);
	
	if (n >= 0 )
	{
		return (dg);
	}
	else
	{
		return (dg * -1);
	}
}
