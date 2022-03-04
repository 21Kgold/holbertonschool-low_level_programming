#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: The returned pointer shall point to a newly allocated space in
 * memory, which contains s1, followed by the first n bytes of s2, and null
 * terminated. If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size1, size2;
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
	if (n > size2)
		n = size2;
	array = malloc(sizeof(char) * (size1 + n + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size1 ; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0 ; j < n ; j++)
	{
		array[i + j] = s2[j];
	}
	array[i + j] = '\0';
	return (array);
}
