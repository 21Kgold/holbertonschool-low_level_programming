#include "main.h"
/**
 * _strspn - calculates the length (in bytes) of the initial segment of s which
 * consists entirely of bytes in accept.
 * @accept: char, string containing the list of characters to match in s
 * @s: char, string to be scanned
 * Return: unsigned int, number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	k = 0;
	for (i = 0 ; accept[i] >= '\0' ; i++)
	{
		for (j = 0 ; s[j] >= '\0' ; j++)
		{
			if (s[j] == accept[i])
			{
				k = k + 1;
				break;
			}
		}
		if (s[j] == '\0' && accept[i] == '\0')
		{
			break;
		}
	}
	return (k);
}
