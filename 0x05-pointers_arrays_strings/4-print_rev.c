#include "main.h"
/**
 * print_rev - reverses strings
 * Return: Always 0;
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
	c++;
	}
	c--;
	do (_putchar(s[c]), c--);
	while (c > 0);

}
