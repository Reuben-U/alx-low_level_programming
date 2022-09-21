#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: Prints lastdigit >= 5
 * @n - random integer
 * @lastdigit - digit to print
 * Return: 0
 */
int main(void)
{
	int n;
	long int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	long int lastdigit(int n)
	{
	lastdigit = n % 10;
	return lastdigit;
	}
	printf("Last digit of %d is %li ", n, lastdigit);

	if (lastdigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastdigit == 0)
	{
		printf("and is 0\n");
	else if (lastdigit < 6)
	{
		printf("and is less than 6 not 0\n");
	}
	else
	{
		printf("\n");
return (0);
}
