#include "main.h"

/**
 * print_sign - check the code
 *
 * @n: character maj and min and print
 *
 * Return: Always 0.
 **/

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar (0);
		return (0);

	}
	else
	{
		_putchar (-1);
		return (-1);
	}
}
