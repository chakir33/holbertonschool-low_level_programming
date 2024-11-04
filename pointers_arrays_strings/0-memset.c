#include "main.h"
#include <stdio.h>

/**
 * _memset - prints a character b in the string
 *
 * @s: string
 *
 * @b: the character
 *
 * @n: entiere
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n != 0)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
