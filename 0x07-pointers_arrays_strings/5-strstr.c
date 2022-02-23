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
	unsigned int i, j, k;

	k = 0;
	if (*needle == 0)
	{
		return (haystack);
	}
	for (j = 0 ; haystack[j] ; j++)
	{
		for (i = 1 ; needle[i] ; i++)
		{
			if (needle[i] == haystack[j])
			{
				k = k + 1;
				if (k == i)
					return (haystack + j - i);
			}
		}
	}
	return ('\0');
}
