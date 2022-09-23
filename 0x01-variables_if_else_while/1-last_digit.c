#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: prints increments
 * @n - random integer
 *Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf(" Last digit of %d is %d ", n, n % 10);

	if (n % 10 > 5)
	{
		printf("and is greater than 5");
	}
	else if (n % 10 == 0)
	{
		printf("and is 0");
	}
	else
	{
		printf("and is less than 6 and not 0");
	}
return (0);
}
