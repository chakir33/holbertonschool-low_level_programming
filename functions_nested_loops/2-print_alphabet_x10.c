#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: return 0
 **/

void print_alphabet_x10(void)
{
	char c;
	int compteur = 0;

	while (compteur < 10)
		{
		for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	compteur++;
		}
}
