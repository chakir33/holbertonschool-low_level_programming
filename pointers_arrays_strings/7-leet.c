#include "main.h"
#include <stdio.h>

/**
 * puts_half - code
 *
 * @str : pointeur
 */

void puts_half(char *str)
{
	int  size = 0;
	int moit;

	while (str[size] != '\0')
		size++;
	for (moit = size / 2; moit < size; moit++)
	{
	_putchar(str[moit]);
	}
	_putchar('\n');
}
