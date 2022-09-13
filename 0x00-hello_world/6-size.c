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
	printf("size of char: %zu bytes\n", sizeof(charT));
	printf("size of int: %zu bytes\n", sizeof(intT));
	printf("size of long: %zu bytes\n", sizeof(longT));
	printf("size of long int: %zu bytes\n", sizeof(longlongintT));
	printf("size of float: %zu bytes\n", sizeof(floatT));
return (0);
}
