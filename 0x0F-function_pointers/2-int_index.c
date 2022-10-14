#include "function_pointers.h"

/**
 * int_index - checks for specific numbers
 * @array: array to be checked
 * @cmp: comparism function
 * @Return: -1 if none matches, or size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	else
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
		}
		if (i = size)
			{
				return (-1);
			}
		else
		return (i);
	}
}
