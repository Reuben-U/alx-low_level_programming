#include "main.h"

/**
 * @*_strncpy - copies n bytes
 * @dest: destination file pointer
 * @src: pointer to file to be copied
 * @n: numbr of lines of file to be copied
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0, ln = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		len++;
	}
	for (i = 0; *(src + i) != '\0'; i++)
	{
		ln++;
	}

	if (len > ln)
	{
		for (i = 0; (i < n) && (*(src + i) != '\0'); i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	dest[i] = '\0';
	}
return (dest);
}
