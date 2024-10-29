#include "main.h"

/**
 * print_square - print#
 *
 * @size: number
 *
 * Return: un scare of #
 */
void print_square(int size)
{
	int ligne = 0;
	int chara;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (size > ligne)
	{
		for (chara = 0; chara < size; chara++)
			_putchar('#');
		_putchar('\n');
		ligne++;
	}
}
