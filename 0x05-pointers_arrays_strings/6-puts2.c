#include "main.h"

/**
 * puts2 - prints every two integers
 *@str: pointer for string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, len = 0;
	char *ps;

	ps = s;
	for (i = 0; *ps != '\0'; i++)
	{
		len++;
		ps++;
	}
	ps--;

	for (i = 0; i <= len; i++)
	{
		if (i % 2 != 0)
		_putchar(s[i]);
		else
		continue;
	}
}
