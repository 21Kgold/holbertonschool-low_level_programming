#include "main.h"
/**
 * _strchr - returns a pointer to the first occurrence of the character c in
 * the string s.
 * @c: char
 * @s: char
 * Return: a pointer to the matched character or NULL if the character is not
 * found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
