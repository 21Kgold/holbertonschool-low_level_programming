#include "main.h"

/**
 * _isupper - Returns 1 if c is uppercase, 0 otherwise
 * @c: int
 * Return: int
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
	return (1);
	}
	return (0);
}
