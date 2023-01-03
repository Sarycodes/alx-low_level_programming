#include "main.h"



void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 1; row <= 8; row++)
	{
		for (col = 1; col <= 8; col++)
		{
			_putchar(a[row][col]);
		}

		_putchar('\n');
	}
}
