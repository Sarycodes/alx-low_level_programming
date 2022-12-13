#include "main.h"

/**
 *print_sign - prints the sign of a number
 *
 *@n: integer input
 *
 *Return: Always 0 success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return(0);
		_putchar('\n');
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return(-1);
		_putchar('\n');
	}
}
