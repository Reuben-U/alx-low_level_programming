#include "variadic_functions.h"
/**
 * print_strings - prints variadic strings
 * @separator: string seprator
 * @n: strings to be printed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list spec;

	if (separator != NULL && n > 0)
	{
	va_start(spec, n);

	for (i = 0; i < n - 1; i++)
	{
		str = va_arg(spec, char *);
		printf("%s", str);

		if (separator == NULL)
			printf("%s", "nil");
		else
			printf("%s", separator);
	}
	str = va_arg(spec, char *);
	printf("%s", str);

	va_end(spec);
	}

	putchar('\n');

}
