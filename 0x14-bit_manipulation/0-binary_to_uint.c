#include "main.h"
/**
 * binary_to_uint - convert char base 2 number to unsigned int base 10 number
 * @b: base 2 number string containing only 1's and 0's
 * Return: unsigned int base 10 number; or 0 if there is a char in the string b
 * that is different from 0 or 1. Return 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j = 0;
	unsigned int k = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1' && b[i] != '\0')
		{
			return (0);
		}
	}
	for (i = i - 1 ; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			j += (1 << k);
		}
		k += 1;
	}
	return (j);
}
