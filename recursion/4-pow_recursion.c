#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - puisssance
 *
 * @x: number
 * @y: exposant
 *
 * Return: number.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (y);
}
