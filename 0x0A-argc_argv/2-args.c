#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives, one per line.
 * @argc: argument count
 * @argv: argument vector array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	printf("%s\n", argv[i]);

	return (0);
}
