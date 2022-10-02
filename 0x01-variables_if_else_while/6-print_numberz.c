#include <stdio.h>

/**
 * main - prints 0 to 9
 * Return: 0.
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar((i % 10) + '0');
		i++;
	}
	putchar('\n');
return (0);
}
