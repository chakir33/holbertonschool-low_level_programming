#include "main.h"

/**
 * print_line - print _
 *@n: number
 * Return: _
 */
void print_line(int n)
{
	int z = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		while (z != n)
		{
			_putchar('_');
			z++;
		}
		_putchar('\n');
	}
}
