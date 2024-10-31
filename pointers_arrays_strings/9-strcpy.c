#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copy un pointeur for a other
 *
 * @src: first pointeur
 * @dest: second pointeur
 *
 * Return: a copy.
 */
char *_strcpy(char *dest, char *src)
{
	char *cpydest = dest;

	while (*src != '\0')
	{
		*dest = *src;
	dest++;
	src++;
	*dest = '\0';
	}
	return (cpydest);
}
