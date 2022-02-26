#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of the multiplication, followed by a new line
 * assume that the two numbers and result can be stored in an integer
 * If the program does not receive two arguments, your program should print
 * Error, followed by a new line, and return 1
 * @argc: argument count
 * @argv: argument vector array
 * Return: 0 if receives two factor, 1 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
