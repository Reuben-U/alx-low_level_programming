#include <stdio.h>

/**
 * main - prints out alphabets from a to z
 * Return: 0
 */
int main(void)
{
	char n = 'a';
	
	while (n <= 'z')
	{
	putchar("%c", n);
	}
	putchar("\n");
	
	return (0);
}
