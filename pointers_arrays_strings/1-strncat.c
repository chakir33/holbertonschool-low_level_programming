#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "2-strlen.c"
/**
 * _strcat - change directory
 *
 * @src: the source of the code
 * @dest: the destination of the code
 * @n: number
 *
 * Return: value.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i_dest = 0;
	int i = 0;

	while (dest[i_dest] != '\0')
		i_dest++;
	while (i < n && src[i] != '\0')
	{
		dest[i_dest++] = src[i++];
	}
	dest[i_dest] = '\0';
	return (dest);
}
