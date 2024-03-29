#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse. Loops or stdio library not
 * allowed.
 * @s: char, string to be printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
