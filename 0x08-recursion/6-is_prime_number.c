#include "main.h"
/**
 * prime_test - finds if a number is a prime.
 * @n: int
 * @i: int
 * Return: int, 1 if the input integer is a prime number, otherwise return 0
 */
int prime_test(int n, int divisor)
{
	if (divisor == n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (prime_test(n, divisor + 1));
}
/**
 * is_prime_number - finds if a number is a prime.
 * Loops or stdio library not allowed.
 * @n: int
 * Return: int, 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (prime_test(n, divisor));
}
