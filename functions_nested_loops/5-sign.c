#include "main.h"
#include <stdio.h>

/**
 * print_sign - check the code
 *
 * @n: character maj and min and print
 *
 * Return: Always 0,-1,1.
 **/

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
