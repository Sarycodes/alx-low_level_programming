#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int ans = 0;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	ans = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", ans);

	return (0);
}