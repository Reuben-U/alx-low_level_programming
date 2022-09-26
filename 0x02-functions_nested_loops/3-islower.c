#include "main.h"

/**
 **_islower - checks lower case
 *@c: alphabet to be checked.
 *Return: 1 if lower case or 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
return (0);
}
