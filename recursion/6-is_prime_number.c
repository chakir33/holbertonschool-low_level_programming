#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - number first
 *
 * @n: number
 *
 * Return: zero or one.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	else
		return (1);
}
