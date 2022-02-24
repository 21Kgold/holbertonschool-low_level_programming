#include "main.h"
/**
 * _strlen_recursion - print the lenght of a string Loops or stdio library not
 * allowed.
 * @s: char, string to be printed
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	_strlen_recursion(s + 1);
	return (s);
}
