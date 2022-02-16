#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: char array
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char k;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}
	i--;
	for (j = 0; j <= i / 2; j++)
	{
	k = s[j];
	s[j] = s[i - j];
	s[i - j] = k;
	}
}
