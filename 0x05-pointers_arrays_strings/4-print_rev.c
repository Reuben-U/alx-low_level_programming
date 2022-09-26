#include "main.h"
/**
 * print_rev - reverses strings
 * Return: Always 0;
 */

void print_rev(char *s)
{
	int c = 0;

	if (*s != '\0')
	{
	c++;
	}
	do (c--);
		_putchar(s);
	while (c >= 0);
		_putchar(s);

}
