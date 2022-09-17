#include "main.h"

/**
 * positive_or_negative - checks sign of input and displays output
 */

int main(int i)
{
	int i;

	printf("Please enter value:\n");
	scanf("%d", &i);

	if ( i = 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
return 0;
}
