#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr:   pointer to memory previously allocated with malloc(old_size). The
 * contents will be copied to the newly allocated space, in the range from the
 * start of ptr up to the minimum of the old and new sizes
 * if new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, call malloc(new_size)
 * If new_size is zero, and ptr is not NULL,  call is free(ptr). Return NULL
 * @old_size:  is the size, in bytes, of the allocated space for ptr
 * @new_size:  is the new size, in bytes of the new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_copy;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_copy = malloc(new_size);
	if (ptr_copy == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0 ; i <= old_size ; i++)
		{
			ptr_copy[i] = ((char *) ptr)[i];
		}
	}
	if (new_size < old_size)
	{
		for (i = 0 ; i <= new_size ; i++)
		{
			ptr_copy[i] = ((char *) ptr)[i];
		}
	}
	free(ptr);
	return (ptr_copy);
}
