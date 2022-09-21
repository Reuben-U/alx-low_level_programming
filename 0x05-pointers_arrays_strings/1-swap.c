#include "main.h"
/**
 * swap_int - use pointers to swap integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: Always 0;
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
