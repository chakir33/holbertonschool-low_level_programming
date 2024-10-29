#include "main.h"
/**
 * print_diagonal - diagonal of \
 *
 *@n: number
 *
 * Return: Always \.
 */
void print_diagonal(int n)
{
	int espace;
	int ligne = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (ligne < n)
	{
		for (espace = 0; ligne > espace; espace++)
		{
			_putchar(' ');
		}
		if (ligne == espace)
		{
		_putchar(92);
		_putchar('\n');
		}
		ligne++;
	}
}
