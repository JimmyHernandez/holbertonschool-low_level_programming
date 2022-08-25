#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: two dimensional array for chessboard
 **/
void print_chessboard(char (*a)[8])
{
	int n, b;

	for (n = 0; n < 8; n++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[n][b]);
		}
		_putchar('\n');
	}
}
