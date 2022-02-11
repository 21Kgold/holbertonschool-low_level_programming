#include "main.h"

/**
 * _isdigit - Returns 1 if c is a decimal digit character, 0 otherwise
 * @c: int
 * Return: int
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
	return (1);
	}
	return (0);
}
