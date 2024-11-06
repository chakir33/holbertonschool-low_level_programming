#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion_2 - racine carre
 *
 * @x: multiple
 * @n: number of racine carrer
 *
 * Return: Always 0.
 */
int _sqrt_recursion_2(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_2(n, x + 1));
	}
}


/**
 * _sqrt_recursion - call the fonction
 *
 * @n: racine carrer
 * Return: the fonction
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_2(n, 1));
}
