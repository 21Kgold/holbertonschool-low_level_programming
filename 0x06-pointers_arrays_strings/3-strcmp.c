#include "main.h"
/**
 * _strcmp - compares two strings, character by character starting from the
 * first character until the characters in both strings are equal or a NULL
 * character is encountered.
 * @s1: char string
 * @s2: char string
 * Return: int less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or  be greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			break;
		}
	}
	return (s1[i] - s2[i]);
}
