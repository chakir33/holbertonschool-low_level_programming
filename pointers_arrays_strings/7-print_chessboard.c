#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - echequier
 * @a: array
 */
void print_chessboard(char (*a)[8])
{
	int h;
	int l;

	for (l = 0; l < 8; l++)
	{
	for (h = 0; h < 8; h++)
	_putchar(a[l][h]);
	_putchar('\n');
	}
}
