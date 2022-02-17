#include "main.h"
/**
 * _strncat - Concatenates two strings, it will use at most n bytes from src
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest
 * @dest: char string
 * @src: char string
 * @n: n bytes from src that will be appended
 * Return: char, a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		dest[i] = dest[i];
	}
	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
