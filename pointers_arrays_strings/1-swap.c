#include "main.h"

/**
 * swap_int - i want swip two value
 *
 * @a: its number
 * @b: its number
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
