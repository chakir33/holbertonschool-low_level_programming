#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - code affiche number
 *
 * @n: take the number for affiche all
 *
 * printf - to affiche number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
}
