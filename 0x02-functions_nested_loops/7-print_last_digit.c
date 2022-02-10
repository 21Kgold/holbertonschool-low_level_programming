#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number
 * Return: last digit
 */
int print_last_digit(int n)
{
        int dg;
        int ndg;

        if (n >= 0 )
        {
                dg = (n % 10);
				return (dg);
                _putchar(dg + '0');
        }
        if else
        {
                ndg = -1 * (n % 10);
				return (ndg);
                _putchar(ndg + '0');
        }
}
