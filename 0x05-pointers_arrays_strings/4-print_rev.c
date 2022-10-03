#include "main.h"
/**
 * print_rev - reverses strings
 * @s: pointer to string to be reversed
 * Return: Always 0;
 */

void print_rev(char *s)
{
	int c = 0;

	if (*s > '\0')
	{
	while (s[c] != '\0')
	{
	c++;
	}
	c--;
	do(_putchar(s[c]), c--);
	while (c > -1);
	}
	_putchar('\n');
}
