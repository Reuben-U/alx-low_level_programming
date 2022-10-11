#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string to be printed
 * Return: void.
 */
void puts_half(char *str)
{
	int i, len = 0;
	char *pstr;

	pstr = str;
	for (i = 0; *pstr != '\0'; i++)
	{
		len++;
		pstr++;
	}

	if (len % 2 != 0)
	{
		for (i = (len + 1 )/ 2; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = len / 2; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}
_putchar('\n');
}
