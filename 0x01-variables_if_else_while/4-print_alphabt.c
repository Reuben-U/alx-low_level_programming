#include <stdio.h>

/**
 * main - prints alphabets but skips some
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
	if (ch == 'e')
	ch++;
	if (ch == 'q')
	ch++;
	putchar(ch);
	}
	putchar('\n');
	
	return (0);
}
