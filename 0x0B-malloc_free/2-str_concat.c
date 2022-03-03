#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings
 * @s1: char, first string
 * @s2: char, second string
 * Return: char, The returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1, followed by the contents of s2,
 * and null terminated. If NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size1, size2;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0 ; s1[size1] != '\0' ; size1++)
	{
	}
	for (size2 = 0 ; s2[size2] != '\0' ; size2++)
	{
	}
	array = malloc(sizeof(char) * (size1 + size2 + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size1 ; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0 ; j < size2 + 1 ; j++)
	{
		array[i + j] = s2[j];
	}	
	return (array);
}
