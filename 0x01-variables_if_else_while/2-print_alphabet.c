#include <stdio.h>

/**
 * main - prints out alphabets from a to z
 * Return: 0
 */
int main(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);

	putchar('\n');
	return (0);
}
