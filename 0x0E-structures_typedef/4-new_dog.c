#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog1
 * @name: char variable
 * @age: float variable
 * @owner: char variable
 * Return: new dog1 of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_size, owner_size, i;
	dog_t *dog1;

	for (name_size = 0 ; name[name_size] != '\0' ; ++name_size)
	{
	}
	for (owner_size = 0 ; owner[owner_size] != '\0' ; ++owner_size)
	{
	}
	dog1 = malloc(sizeof(dog_t));
	dog1->name = malloc(name_size * sizeof(char));
	dog1->owner = malloc(owner_size * sizeof(char));
	if (dog1 == NULL || dog1->name == NULL || dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < name_size ; i++)
		{
			dog1->name[i] = name[i];
		}
		dog1->age = age;
		for (i = 0 ; i < owner_size ; i++)
		{
			dog1->owner[i] = owner[i];
		}
		return (dog1);
	}
}
