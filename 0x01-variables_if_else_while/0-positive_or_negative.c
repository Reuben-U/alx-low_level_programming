#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 *Description: code tests if statements
 *
 * return: 0 'Always success';
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", &n);
	}
	else if (n == 0)
	{
		printf("%ld is zero\n", &n);
	}
	else
	{
		printf("%ld is negative\n", &n);
	}
return (0);
}
