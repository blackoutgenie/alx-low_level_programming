#include "main.h"

/**
 *_puts_recursion - prints string and followed by a new line
 * @s: string to print
 * return: 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
