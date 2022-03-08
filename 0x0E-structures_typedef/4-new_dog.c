#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: char variable
 * @age: float variable
 * @owner: char variable
 * Return: new dog of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_size, owner_size, i;
	dog_t *dog;

	for (name_size = 0 ; name[name_size] != '\0' ; ++name_size)
	{
	}
	for (owner_size = 0 ; owner[owner_size] != '\0' ; ++owner_size)
	{
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(name_size * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(owner_size * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0 ; i < name_size ; i++)
	{
		dog->name[i] = name[i];
	}
	dog->age = age;
	for (i = 0 ; i < owner_size ; i++)
	{
		dog->owner[i] = owner[i];
	}
	return (dog);
}
