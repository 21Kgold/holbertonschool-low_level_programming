#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers containing all the values from
 * min (included) to max (included), ordered from min to max
 * @min: start of the array
 * @max: en of the array
 * Return: pointer to the created array, NULL if  min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < max - min + 1 ; i++)
	{
		array[i] = min + i;
	}
	array[i] = '\0';
	return (array);
}
