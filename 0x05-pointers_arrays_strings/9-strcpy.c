#include "main.h"

/**
 * @*_strcpy - copies file to destination string
 * @dest: destination
 * @src: origin
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

return (dest);
}
