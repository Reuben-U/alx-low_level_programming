#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 except 2 & 9
 * Return: void.
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar('0' + i);
		}
	}
_putchar('\n');
}
