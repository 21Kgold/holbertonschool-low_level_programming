#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - a function that prints name
 * @name: a char pointer parameter that points to the string to be printed
 * @f: a pointer to a function that calls the parameter name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && (*f) != NULL)
	{
		(*f)((char *)name);
	}
}
