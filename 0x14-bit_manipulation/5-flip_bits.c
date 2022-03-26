#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @m: number to be evaluated
 * @n: number to be evaluated
 * Return: number of flips needed to n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int f = 0;

	n = n ^ m;
	for ( ; n > 0 ; )
	{
		f = f + (n & 1);
		n = n >> 1;
	}
	return (f);
}
