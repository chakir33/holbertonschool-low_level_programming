#include "main.h"
#include <stdio.h>

/**
 * cap_string - code
 *
 * @str : pointeur
 *
 * Return: Always 0.
 */

char *cap_string(char *str)
{
	int i;
	int i_fin;
	int deb;
	char fin[] = ",;.!?(){}\n\t\" ";

	for (i = 0, deb = 0; str[i] != '\0'; i++)
	{
		if (str[0] <= 'z' && str[0] >= 'a')
			deb = 1;
		for (i_fin = 0; fin[i_fin] != '\0'; i_fin++)
		{
			if (fin[i_fin] == str[i])
				deb = 1;
		}
		if (deb)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] = str[i] - 32;
				deb = 0;
			}
			else if (str[i] <= '9' && str[i] >= '0')
			       deb = 0;
			else if (str[i] <= 'Z' && str[i] >= 'A')
				deb = 0;
		}
	}
	return (str);
}
