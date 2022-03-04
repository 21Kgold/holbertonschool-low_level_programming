#include "main.h"
#include <stdlib.h>
/**
 * _calloc - using malloc allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer. The memory is set to zero
 * @nmemb: number of elements
 * @size: size of each element
 * Return: If nmemb or size is 0, then _calloc returns NULL.
* If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb * size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < nmemb * size ; i++)
	{
		p[i] = 0;
	}
	return (p);
}
