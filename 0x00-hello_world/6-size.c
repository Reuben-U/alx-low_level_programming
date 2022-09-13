#include <stdio.h>
/**
 * Main - Prints the file sizes
 *  
 * Return: 0;
 */
int main(void)
{
	int intT;
	float floatT;
	long longT;
	long int longintT;
	char charT;
/**
 * sizeof displays character sizes
 */
	printf("size of int: %zu bytes\n", sizeof(intT));
	printf("size of float: %zu bytes\n", sizeof(floatT));
	printf("size of long: %zu bytes\n", sizeof(longT));
	printf("size of long int: %zu bytes\n", sizeof(longintT));
	printf("size of char: %zu bytes\n", sizeof(charT));
return (0);
}
