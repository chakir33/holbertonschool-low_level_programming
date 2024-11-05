#include "main.h"

/**
 * _puts_recursion - print character
 *
 * @s: string
 */
void _puts_recursion(char *s)
{
       	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
