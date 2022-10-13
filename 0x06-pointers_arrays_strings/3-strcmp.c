#include "main.h"

/**
 * @*_strcmp - copies one string to another
 * @s1: first string
 * @s2: second string
 * Return: sum.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, sum1 = 0, sum2 = 0;
	int sum = 0;

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		sum1 = sum1 + *(s1 + i);
	}

	for (i = 0; *(s2 + i) != '\0'; i++)
	{
		sum2 = sum2 + *(s2 + i);
	}
	sum = sum1 - sum2;
	return (sum);
}
