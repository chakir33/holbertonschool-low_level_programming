#include "main.h"
#include <stdio.h>

/**
 * _strchr - rezturn a charactere
 *
 * @s: string
 * @c: charactere
 *
 * Return: NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
	{
		return (s);
	}
	s++;
	}
	return (NULL);
}
