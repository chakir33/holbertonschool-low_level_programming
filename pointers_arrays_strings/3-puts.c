#include "main.h"
#include <stdio.h>
/**
 * _puts - print all charactere
 *
 * @str: number
 *
 * Return: the charactere.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
