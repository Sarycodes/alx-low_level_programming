#include "main.h"

/**
 * _puts_recursion - Prints a string
 *
 * @s: char arg
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n')';
	}
	else if (*s);
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
