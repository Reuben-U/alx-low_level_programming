#include "function_pointers.h"

/**
 * array_iterator - prints integers
 * @array: array to print
 * @size: size of int array
 * @action: pointer to be used.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
		size_t i;
	if ((array != NULL) && action)
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
