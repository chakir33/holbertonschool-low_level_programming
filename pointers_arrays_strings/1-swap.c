#include "main.h"

/**
 * swap_int - i want swip two value
 *
 * @a: its number
 * @b: its number
 */
void swap_int(int *a, int *b)
{
	int *p;
	{
	_putchar(a);
	_putchar(b);
	}
	p = &a;
	*p = 42;

	 p = &b;
	 *p = 98;
	{
		 _putchar(a);
		 _putchar(b);
	}
}
