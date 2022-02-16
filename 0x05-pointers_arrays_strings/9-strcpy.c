#include "main.h"
/**
* _strcpy - copies string pointed to by src, to the buffer pointed to by dest
* Description: the copy must include the '\0' terminating null byte
* @src: char that contains the string that will be copied
* @dest: char where the string will be copied
* Return: char dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
