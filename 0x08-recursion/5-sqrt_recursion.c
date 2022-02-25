#include "main.h"
/**
 * root_test - returns the natural square root of a number.
 * @n: int
 * @factor: int
 * Return: int,  if n does not have a natural square root, should return -1.
 */
int root_test(int n, int factor)
{
	if (factor == n && factor != 1)
	{
		return (-1);
	}
	if (factor * factor == n)
	{
		return (factor);
	}
	return (root_test(n, factor + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * Loops or stdio library not allowed.
 * @n: int
 * Return: int, if n does not have a natural square root, should return -1.
 */
int _sqrt_recursion(int n)
{
	int factor = 0;

	if (n < 0)
	{
		return (-1);
	}
	return (root_test(n, factor));
}
