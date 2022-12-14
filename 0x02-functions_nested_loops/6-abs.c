#include "main.h"

/**
 *abs - computes the absolute value of an integer
 *@n: integer number
 *Return: Always 0 success
 */

int _abs(int)
{
	int n;

	if (n < 0)
	{
		n *= -1;
	}
	return n;
}
