#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - print all charactere withouth putchar
 * @s: string charactere
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int c = 0;
	int a;
	char cpy;

	for (a = len - 1; a >= len / 2; a--)
	{
		cpy = s[a];
		s[a] = s[c];
		s[c] = cpy;
		c++;
	}
}
