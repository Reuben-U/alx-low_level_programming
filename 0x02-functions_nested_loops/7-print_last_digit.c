#include "main.h"

/**
 * print_last_digit - prints last digit
 * @a: int to have last character printed
 * Return: b.
 */
int print_last_digit(int a)
{
	if (a > 0)
	{
		a = a % 10;
		printf("%d", a);
	}
	else if (a == 0)
	{
		printf("%d", a);
	}
	else
	{
		a = a * -1;
		a = a % 10;
		printf("%d", a);
	}
return (a);
}
