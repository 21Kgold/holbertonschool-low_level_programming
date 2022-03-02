#include "main.h"
/**
* _atoi - convert a string to an integer, take into account - and + signs
* @s: char string that will be converted
* Return: The converted value, or 0 If there are no numbers in the string
*/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	int i = 0;

	for (i = 0; s[i] ; i++)
	{
		if (s[i] == '-')
		{
			sign = sign * (-1);
		}
		else if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
		{
			num = (num * 10) + (s[i] - '0');
		}
		else if (num > 0)
		{
			break;
		}
	}
	return (sign * num);
}
