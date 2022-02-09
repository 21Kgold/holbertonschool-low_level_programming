#include "main.h"

/**
 * _islower - entry point
 * @c: char type letter
 * Return: return 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
