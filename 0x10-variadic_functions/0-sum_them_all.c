#include "variadic_functions.h"

/**
 * sum_them_all - sums arguments
 *
 *@n: number of integers to be summed.
 *
 * Return: summed.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, summed = 0;
	va_list added;

	if (n == 0)
		return (0);
	va_start(added, n);

	for (i = 0; i < n; i++)
	{
		summed += va_arg(added, int);
	}
	va_end(added);

	return (summed);
}
