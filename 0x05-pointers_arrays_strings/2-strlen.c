#include "main.h"
#include <string.h>

/**
 * _strlen - calculates lenth of string pointed to
 * @s: array pointer
 * Return: string length;
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
return (c);
}
