#include "main.h"
#include <stdio.h>
/**
 * _strlen - print how much character
 *
 * @s: number
 *
 * Return: the number of charactere.
 */
int _strlen(char *s)
{
	int compteur = 0;

	while (*s != '\0')
	{
		compteur++;
		s++;
	}
	return (compteur);
	return (0);
}
