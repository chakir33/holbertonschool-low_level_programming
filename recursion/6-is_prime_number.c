#include "main.h"
#include <stdio.h>

/**
 * check_prime - i un nombre est divisible par un diviseur.
 *
 * @n: Le nombre à tester.
 * @i: Le diviseur à tester.
 *
 * Return: 1 si n est premier, sinon 0.
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - vérifier si un nombre est premier.
 *
 * @n: Le nombre à tester.
 *
 * Return: 1 si le nombre est premier, sinon 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);

	return (check_prime(n, 3));
}

