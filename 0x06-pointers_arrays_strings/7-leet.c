#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: char string
 * Return: char
 */
char *leet(char *s)
{
	int i, j;
	char *setL = "AaEeOoTtLl";
	char *setN = "4433007711";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (s[i] == setL[j])
			{
				s[i] = setN[j];
			}
		}
	}
	return (s);
}
