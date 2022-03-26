#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @index: starts from 0 of the bit you want to get
 * @n: the value of the bit at index index or -1 if an error occured
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 32)
	{
		n = ((n >> index) & 1);
		return (n);
	}
	return (-1);
}
