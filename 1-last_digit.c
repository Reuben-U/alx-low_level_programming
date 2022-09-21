#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *Rand file performance
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is", n)
		if ( n > 5)
		{
			printf("and is greater than 5")
		}
		else if ( n
