#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet 10 times, in lowercase, followed by a
 *new line
 *
 *Return: Always 0 success
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	for (j = 0; j < 10; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
