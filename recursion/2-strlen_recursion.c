#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - size of the string
 *
 * @s: string
 *
 * Return: *s.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (*s);
}
