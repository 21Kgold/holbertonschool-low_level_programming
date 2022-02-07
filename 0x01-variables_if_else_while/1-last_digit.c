#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int n;
	int dg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dg = n % 10;
	if (dg > 5)
	{
		printf ("Last digit of %d is %d and is greater than 5\n", n, dg);
	}
	if (dg == 0)
	{
		printf ("Last digit of %d is %d and is 0\n", n, dg);
	}
	if (dg < 6 && dg != 0)
	{
		printf ("Last ddigit of %d is %d and is less than 6 and not 0\n", n, dg);
	}
	return (0);
}
