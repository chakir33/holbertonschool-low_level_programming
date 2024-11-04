#include "main.h"
#include <stdio.h>

/**
 * _strspn - count the letter are simmilar in the two string different
 *
 * @s: first string
 * @accept: second string
 *
 * Return: string
 */
unsigned int _strspn(char *s, char *accept)
{
	int compteur = 0;
	int i = 0;

	while (s)
	{
		while (accept[i] != '\0')
		{
			if (*s == *(accept + i))
			{
				compteur++;
				break;
			}
			i++;
		}
		if (*(accept + i) == '\0')
			return (compteur);
		s++;
		i = 0;
	}
	return (compteur);
}
