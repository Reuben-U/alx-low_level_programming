#include <unistd.h>
/**
 *_ putchar.c - displays _putchar
 * @putchar: The characters to be printed
 *
 * Return: on success 1.
 * on error, -1 is returned, and erno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
