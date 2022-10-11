#include "main.h"

/**
 *rev_string- reverses strings
 *@s: string to be reversed
 *@i++: string increment.
 * Return: void.
 */
void rev_string(char *s)
{
	int i, len = 0;
	char *ps, b;

	ps = s;
	for (i = 0; *ps != '\0'; i++)
	{
		len++;
		ps++;
	}
	ps--;


	for (i = 0; i < len / 2; i++)
	{
		b = *(s + i);
		*(s + i) = *(ps - i);
		*(s + len - 1 - i) = b;
	}
}
