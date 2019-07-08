#include "holberton.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: matriz
*/

void print_chessboard(char (*a)[8])
{
	int cont, tmp;

	for (cont = 0; cont < 8; cont++)
	{
		for (tmp = 0; tmp < 8; tmp++)
		{
			_putchar(a[cont][tmp]);
		}
	_putchar('\n');
	}
}
