#include "main.h"
/**
 * _strcmp - compares the two strings s1 and s2
 * @s1: char string
 * @s2: char string
 * Return: int less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or  be greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (i == j)
	{
		k = 0;
	}
	if (i > j)
	{
		k = 15;
	}
	if (i < j)
	{
		k = -15;
	}
	return (k);
}
