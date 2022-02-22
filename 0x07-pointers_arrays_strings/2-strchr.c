#include "main.h"
/**
 * _strchr - returns a pointer to the first occurrence of the character c in
 * the string s.
 * @c: char
 * @s: char
 * Return: a pointer to the matched character or NULL if the character is not
 * found. The terminating null byte is considered part of the string, so that
 * if c is specified as '\0', these function return a pointer to the terminator
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (c == '\0')
	{
		return (s + i + 1);
	}
	return ('\0');
}
