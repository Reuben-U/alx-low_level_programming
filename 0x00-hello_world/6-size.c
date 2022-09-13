#include <stdio.h>
/**
 * Main - Prints the file sizes
 *  
 * Return: 0;
 */
int main(void)
{
	char charT;
	int intT;
	long int longT;
	long long int longlongintT;
	float floatT;
/**
 * sizeof displays character sizes
 */
	printf("Size of a char: %zu byte(s)\n", sizeof(charT));
	printf("Size of an int: %zu byte(s)\n", sizeof(intT));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longT));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintT));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatT));
return (0);
}
