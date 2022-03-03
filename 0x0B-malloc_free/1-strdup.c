#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char, string to be copied
 * Return: char, NULL if str = NULL. returns a pointer to the duplicated string
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i, size;
	char *array;

	for (size = 0 ; str[size] != '\0' ; size++)
	{
	}
	if (str[0] == '\0')
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * (size + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size + 1 ; i++)
	{
		array[i] = str[i];
	}
	return (array);
}
