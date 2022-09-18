#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints lastdigit >= 5
 */
int main(void)
{
	int n;
	long int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/**
 * Define last digit function
 */
	lastdigit = n % 10;
/**
 * Compare last digit to 5
 */
	printf("Last digit of %d is %ld ", n, lastdigit);
/**
 * sort out last digit
 */
	if (lastdigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastdigit == 0)
	{
		printf("and is 0\n");
	else if (lastdigit < 6)
	{
		printf("and is less than 6 not 0\n") ;
	}
	else
	{
		printf("\n");
return 0;
}
