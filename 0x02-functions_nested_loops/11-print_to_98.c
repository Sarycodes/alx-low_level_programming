#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural nums n to 98
 *
 * @n: int val
 *
 * Return: n to 98
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d, ", n);

			if (n == 98)
			{
				printf("%d", n);
			}
		}

		printf("\n");

	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);

			if (n == 98)
			{
				printf("%d", n);
			}
		}

		printf("\n");
	}
	else if (n == 98)
	{
		printf("98\n");
	}
}