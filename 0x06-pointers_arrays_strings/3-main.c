#include "main.h"

/**
 * main - check the code
 *
 *Return: Always 0.
 *
 **/

int main(void)

{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d", _strcmp(s1, s2));
	printf("%d", _strcmp(s2, s1));
	printf("%d", _strcmp(s1, s1));
	return (0);
}
