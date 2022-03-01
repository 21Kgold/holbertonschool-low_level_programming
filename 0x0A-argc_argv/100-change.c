#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector array
 * Return: 0 if receives valid numbers
 */
int main(int argc, char *argv[])
{
	int cents, i = 0;

	if (argc == 2)
	{
		cents = atoi(argv[1]);

		for (; cents > 0 ; i++)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
		}
		printf("%d\n", i);
		return (0);
	}
	printf("Error\n");
	return (1);
}
