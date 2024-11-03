#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "2-strlen.c"

/**
 * _strncpy - code
 *
 * @src: source
 * @dest: destination
 * @n: number
 *
 * Return: code.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
			dest[i] = src[i];
	for (i = 0; i < n; i++)
			dest[i] = '\0';
	return (dest);
}
