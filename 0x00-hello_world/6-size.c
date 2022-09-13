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
	printf("size of a char: %zu bytes\n", sizeof(charT));
	printf("size of an int: %zu bytes\n", sizeof(intT));
	printf("size of a long int: %zu bytes\n", sizeof(longT));
	printf("size of a long long int: %zu bytes\n", sizeof(longlongintT));
	printf("size of a float: %zu bytes\n", sizeof(floatT));
return (0);
}
