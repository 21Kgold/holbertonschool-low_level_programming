#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: char string
 * Return: char
 */
char *rot13(char *s)
{
	int i, j;
	char *normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *encoded = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 54 ; j++)
		{
			if (s[i] == normal[j])
			{
				s[i] = encoded[j];
				break;
			}
		}
	}
	return (s);
}
