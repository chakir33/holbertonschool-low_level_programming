#include "main.h"
#include <stdio.h>

/**
 * factorial - factoriel of number
 *
 * @n: number
 *
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (n);
}
