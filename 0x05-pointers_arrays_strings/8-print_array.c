#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* Description: numbers should be displayed in the same order as they are stored
* @a: int
* @n: int where n is the number of elements of the array to be printed
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
}
