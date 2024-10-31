#include "main.h"
#include <stdio.h>
/**
 * main - check the code for
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
