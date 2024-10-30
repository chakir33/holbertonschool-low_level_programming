#include "main.h"
#include <stdio.h>
/**
 * puts2 - print some character bu not all
 *
 * @str: number
 *
 * Return: the some xharacter
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		if (*str != '\0')
			str++;
	}
	_putchar('\n');
}
