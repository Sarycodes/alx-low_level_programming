#include "main.h"

/**
 *_isalpha -  checks for lowercase and uppercase character
 *@c: character input
 *Return: Always 0 success
 */
int _isalpha(int c)
{
	if (c >= 'a' || c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
