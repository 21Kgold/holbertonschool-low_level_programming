#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * assume that the add numbers and result can be stored in an integer
 * If one of the number contains symbols that are not digits, print Error
 * If no number is passed to the program, print 0, followed by a new line
 * @argc: argument count
 * @argv: argument vector array
 * Return: 0 if receives valid numbers, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j;
	int k = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] ; j++)
		{
			if ((argv[i][j]) <= 47 && (argv[i][j]) >= 58)
			{
				printf("Error\n");
				return (1);
			}
		}
		k += atoi(argv[i]);
	}
	printf("%i\n", k);
	return (0);
}
