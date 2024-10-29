#include "main.h"
/**
 * print_triangle - triangle #
 *
 *@size: number
 */
void print_triangle(int size)
{
	int espace;
	int ligne = 1;
	int hash;

	while (ligne <= size)
	{
		{
			for (espace = 1; espace <= size - ligne; espace++)
		{
			_putchar(' ');
		}
		}
		{
			for (hash = 1; hash <= ligne; hash++)
			{
				_putchar(35);
			}
		}
		_putchar('\n');
		ligne++;
	}
}
