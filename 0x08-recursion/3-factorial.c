#include "main.h"
/**
 * int factorial - returns the factorial of a given number Loops or stdio 
 * library not allowed. Factorial of 0 is 1
 * @n: int
 * Return: int, If n is lower than 0, the function should return -1 to indicate
 * an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
