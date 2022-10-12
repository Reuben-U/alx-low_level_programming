#include "main.h"
/**
 * @*_strncat - joins one string to another
 * @dest: destination string
 * @src: original string
 * @n: lenght of src to be appended
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		len++;
	};
	len = i;

	for (i = 0; (i < n) && (*(src + i) != '\0'); i++)
	{
		dest[i + len] = src[i];
	}
	return (dest);
}
