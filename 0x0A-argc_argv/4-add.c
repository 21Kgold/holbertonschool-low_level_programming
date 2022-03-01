#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
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
	int x = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		x += atoi(argv[i]);
	}
	printf("%d\n", x);
	return (0);
}
