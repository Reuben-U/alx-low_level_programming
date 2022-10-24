#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: pointer to separator string
 * @n: integer to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list specially;

	if (separator == NULL)
		return;

	va_start(specially, n);
		for (i = 0; i < (n - 1); i++)
		{
			printf("%d", (va_arg(specially, int)));
			printf("%s", separator);
		}
		printf("%d", va_arg(specially, int));
	va_end(specially);

	putchar('\n');
}
