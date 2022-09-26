#include "main.h"

/**
 *  _isalpha - detects if input is an alphabet
 *  @c: alphabet to be checked
 *  Return: 1 if alphaet, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
return (0);
}
