#include "main.h"

/**
 * _isalpha - entry point
 * @c: char type letter
 * Return: return 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
