#include "main.h"
#include <stdio.h>
/**
 * print_array - print whith , and escpace
 *
 * @a: pointeur
 * @n: valeur
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", *a);
		a++;

		if (c < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
