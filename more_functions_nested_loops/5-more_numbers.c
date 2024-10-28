#include "main.h"

/**
 * print_most_numbers - print number 1 to 14
 * Return: return 1 to 14 *10
 **/

void more_numbers(void)
{
	int c, count;

	for (count = 1; count <= 10; count++)
	{
		for (c = 0; c <= 14; c++)
		{	
			if (c > 9)
				_putchar(c / 10 + 48);
			_putchar(c % 10 + 48);
		}
		_putchar('\n');
	}
}
