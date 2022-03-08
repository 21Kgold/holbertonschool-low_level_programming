#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @name: char variable
 * @age: float variable
 * @owner: char variable
 * @d: pointer type struct dog
 * Description: inicialize a pointer variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
