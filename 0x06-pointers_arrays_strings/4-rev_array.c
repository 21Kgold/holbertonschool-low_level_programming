#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: int array
 * @n: is the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;
	for (i = 0 ; a[i] < n ; i++)
	{
		for (j = i ; j >= 0 ; j--)
		{
			a[i] = a[j];
		}
	}
}
