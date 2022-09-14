#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
/**
 * main - Enter number
 *
 * Dscription: indicate sign
 *
 * Return: Always 0
 */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
return (0);
}
