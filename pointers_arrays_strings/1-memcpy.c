#include "main.h"
#include <stdio.h>

/**
 * _memcpy - prints script of the string in other string
 *
 * @dest: string destination
 * @src: string source
 * @n: entiere
 *
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		*dest  = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
