#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  maiin - Entry point
 *
 *  Description: print alphabet reverse
 *
 * Return: return 0
 **/

	int main(void)
{
	char c;

	for (c = 'z'; c <= 'a'; c++)
	{
		if ((c != 'e') && (c != 'q'))
			putchar(c);
	}
	putchar('\n');
	return (0);
}
