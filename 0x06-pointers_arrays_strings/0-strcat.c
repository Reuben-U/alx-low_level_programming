#include "main.h"
/**
 * @*_strcat - joins one string to another
 * @dest: destination string
 * @src: original string
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, len;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		len++;
	};
	len = i;

	for (i = 0; i <= len; i++)
	{
		dest[i + len] = src[i];
	}
	dest[i + len] = '\0';
	return (dest);
}
