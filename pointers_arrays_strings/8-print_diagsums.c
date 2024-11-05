#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - calcul diagonale
 *
 * @a: array
 * @size: size of the array
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int result_1 = 0;
	int result_2 = 0;

	for (i = 0; i < size; i++)
	{
		result_1 += a[i * (size + 1)];
		result_2 += a[i * size + (size - 1 - i)];
	}
	printf("%i, %i\n", result_1, result_2);
}
