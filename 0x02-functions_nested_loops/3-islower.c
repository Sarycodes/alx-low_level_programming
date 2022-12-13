#include "main.h"

/**
 *_islower -  checks for lowercase character
 * int c: character input
 *Return: Always 0 success
 */
int _islower(int c)
{
	if (c >= 'a')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
