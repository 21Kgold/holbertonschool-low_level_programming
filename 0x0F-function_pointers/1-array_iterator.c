#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on each element of
 * an array
 * @array: a int pointer that point to an array
 * @size: size of the array
 * @action: a function pointer to the function that will be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((int *)array != NULL && (*action) != NULL)
	{
		for (i = 0 ; i < size ; i++)
			(*action)(array[i]);
	}
}
