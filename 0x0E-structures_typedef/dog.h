#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new type
 * @name: new parameter
 * @age: new parameter
 * @owner: new parameter
 * Description:
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} *d;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
