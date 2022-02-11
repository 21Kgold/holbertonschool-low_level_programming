#include "main.h"
#include <stdio.h>

/**
 * main - Print numbers from 1 to 100
 * Description: Prints Fizz, Buzz or FizzBuzz if multiples of 3, 5 or 15
 * Return: int
 */
int main(void)
{
	int n;

	for (n = 1 ; n < 101 ; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		if (n % 3 != 0 && n % 5 != 0)
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
