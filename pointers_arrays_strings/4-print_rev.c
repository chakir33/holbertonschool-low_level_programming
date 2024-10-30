#include "main.h"
#include <stdio.h>
/**
 * print_rev - print all charactere in reverse
 *
 * @s: string charactere
 *
 * Return: the charactere.
 */
void print_rev(char *s)
{
	int compteur = 0;
	int v;

	while (s[compteur] != '\0')
	{
		compteur++;
	}
	for (v = compteur - 1; v >= 0; v--)
	{
		_putchar(s[v]);
	}
	_putchar('\n');
}
