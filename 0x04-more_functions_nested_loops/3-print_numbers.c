#include "main.h"
/**
 * print_numbers - prints 1 to 9
 * Return: void.
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
}
