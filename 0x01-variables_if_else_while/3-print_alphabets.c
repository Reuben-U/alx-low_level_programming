#include <stdio.h>

/**
 * main - prints a to z then A to Z
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	putchar(ch);

	for (ch = 65; ch <= 90; ch++)
	putchar(ch);
	putchar('\n');
return (0);
}
