#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * puts_half - print half charactere
 *
 * @str: string
 */
void puts_half(char *str)
{
	int lon = _strlen(str);

	if (lon % 2 == 0)
	{
		str += lon / 2;
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
	else
	{
		str += (lon + 1) / 2;
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
