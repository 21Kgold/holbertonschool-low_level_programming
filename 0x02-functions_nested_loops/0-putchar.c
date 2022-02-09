#include "main.h"
/**
 * main - Print _putchar
 * Return: zero
 */
int main(void)
{
	char new[] = "_putchar";
	int i = 0;

	while (new[i] != '\0')
	{
		_putchar(new[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
