#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free an initialized variable of type struct dog / dog_t
 * @d: pointer type struct dog / dog_t
 * Description: inicialize a pointer variable
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
