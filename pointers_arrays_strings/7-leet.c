#include "main.h"
#include <stdio.h>

/**
 *leet - code with minuscucle maj and char
 *
 * @str : pointeur
 */
char *leet(char *str)
{
	int i;
	int i_mtts;
	char min[] = "aeotl";
	char maj[] = "AEOTL";
	char replace[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (i_mtts = 0; i_mtts < 5; i_mtts++)
		{
		if (str[i] == min[i_mtts] || str[i] == maj[i_mtts])
			str[i] = replace[i_mtts];
		}
	}
	return (str);
}
