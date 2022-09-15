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
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	return (write(1, &c, 1));
}
