#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - same but return is different
 *
 * @s: first string
 * @accept: second string
 *
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (*(s + j) != '\0')
	{
		while (accept[i] != '\0')
		{
			if (*s == *(accept + i))
			{
				return ((s + j));
			}
			i = 0;
			s++;
			i++;
			accept++;
		}
	}
	return (NULL);
}
