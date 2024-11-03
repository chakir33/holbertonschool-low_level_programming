#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print an array
 * @a: array
 * @n: the number
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int temporaire;
	int i;

	for (i = 0; i < (n / 2); i++)
	{
		temporaire = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temporaire;
	}
}
