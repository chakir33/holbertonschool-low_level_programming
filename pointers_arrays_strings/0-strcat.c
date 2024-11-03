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
	int dest_ = 0;
	int i = 0;

	while (dest[dest2] != '\0')
		dest_++;
	while (src[i] != '\0')
	{
		dest[dest_ + i] = src[i];
		i++;
	}
	dest[dest_ + i] = '\0';
	return (dest);
}
