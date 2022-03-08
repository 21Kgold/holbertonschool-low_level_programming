#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints a variable of type struct dog
 * @d: pointer to type struct dog
 * Description: prints a pointer variable
 */
void print_dog(struct dog *d)
{
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	if (d != 0)
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
