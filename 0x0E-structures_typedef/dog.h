#ifndef DOG_H
#define DOG_H
typedef struct dog dog_t;
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
} *d, *dog1;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
