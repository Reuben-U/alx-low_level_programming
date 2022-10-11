#include "main.h"
/**
* print_array - prints arrays to the nth element
*@a: array to be printed
*@n: number of times to be printed
*Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; (i <= n - 1) && (*(a + i) != '\0'); i++)
	{
		printf("%d,", a[i]);
	}
	putchar('\n');
}
