#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int a = 0;

	for (; s[i] != ' ' && s[i] != '\0'; i++)
	{
		for (; accept[j] = '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				a++;
			}

		}

		j = 0;
	}

	return (a);
}
