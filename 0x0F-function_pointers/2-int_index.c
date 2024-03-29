#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index -  searches for an integer
 * @array: a int pointer that points to an array
 * @size: size of the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: -1 if does not find the integerer or size is < 1, index otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && (*cmp) != NULL)
	{
		for (i = 0 ; i < size ; i++)
		{
			if ((*cmp)(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
