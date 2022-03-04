#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * Description: if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 * @b: unsigned int
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
