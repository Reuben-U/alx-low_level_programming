#include <unistd.h>
/**
 * 0-putchar.c - displays _putchar
 *
 * @putchar: The characters to be printed
 *
 * Return: on success 1.
 * on error, -1 is returned, and erno is set appropriately.
 */
int _putchar(char c)
{
	_putchar('_');
	_putchar('\n');
	return (1);
}
