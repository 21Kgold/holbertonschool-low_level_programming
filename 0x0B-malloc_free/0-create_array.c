#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, initialized with a specific char
 * @size: unsigned int, size of the array
 * @c: char, char that inicialize the array
 * Return: char, a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size < 1)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		array[i] = c;
	}
	return (array);
}
