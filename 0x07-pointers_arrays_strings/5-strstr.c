#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle in the string
 * haystack. The terminating null bytes (\0) are not compared
 * @needle: char, string containing the list of characters to match in s
 * @haystack: char, string to be scanned
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	for (i = 0 ; haystack[i] ; i++)
	{
		if (haystack[i] == '\0')
		{
			return ('\0');
		}
		else if (haystack[i] == *needle)
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
