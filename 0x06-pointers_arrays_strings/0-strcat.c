#include "main.h"
/**
 * @*_strcat - appends multiple strings
 * @*dest: destination string
 * @*src: original string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, len;

	for (i = 0; *(dest + i) != '\0'; i++);
	len = i;

	for (i = 0; i <= len; i++)
	{
		dest[i + len] = src[i];
	}
	dest[i + len] = '\0';
	return (dest);
}
