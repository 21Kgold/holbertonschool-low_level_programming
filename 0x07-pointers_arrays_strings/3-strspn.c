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
	int i, k;

	k = 0;
	for ( ; *s ; s++)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (accept[i] == *s)
			{
				k = k + 1;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (k);
			}
		}
	}
	return (k);
}
