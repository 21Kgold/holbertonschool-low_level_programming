#include "main.h"
/**
 * _strncpy - copies a string to another
 * @dest: char string to copy to
 * @src: char string to be copied
 * @n: n bytes from src that will be copied
 * Return: char, a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
               int i;

               for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';

               return (dest);
}
