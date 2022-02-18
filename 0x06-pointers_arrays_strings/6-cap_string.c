#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: char string
 * Return: char
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[0] > 96 && str[0] < 123)
		{
			str[0] = str[0] - 32;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
		str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
		str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}')
		{
			if (str[i + 1] > 96 && str[i + 1] < 123)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
