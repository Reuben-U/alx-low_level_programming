#include "main.h"

/**
 * _puts - prints input to stdout + new line
 * @str: string pointer
 * Return: Always 0;
 */
void _puts(char *str)
{
	int c = 0;

	if (str[c] != '\0')
	{
	_putchar(str[c]);
		c++;
	}
	else
	{
	_putchar('\n');
	}
}
