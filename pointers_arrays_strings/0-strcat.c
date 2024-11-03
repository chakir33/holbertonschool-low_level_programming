#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "2-sterlen.c"

/**
 * *_strcat - 2 string
 *
 * @dest: the pointeur where i want copy the code
 * @src: the pointeur who the code is it
 *
 * Return: the code.
 */
char *_strcat(char *dest, char *src)
{
	int i_dest = 0;
	int i = 0;

	while (dest[i_dest] != '\0')
		i_dest++;
	while (src[i] != '\0')
	{
		dest[i_dest + i] = src[i];
		i++;
	}
	dest[i_dest + i] = '\0';
	return (dest);
}
