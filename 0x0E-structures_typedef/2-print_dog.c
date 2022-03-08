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
		if (d != 0)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
