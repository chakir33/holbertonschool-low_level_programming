#include "main.h"
#include <stdio.h>

/**
 * _strstr - same but return is different.
 *
 * @haystack: first string
 * @needle: second string
 *
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (*(haystack + j) != '\0')
	{
		while (needle[i] != '\0')
		{
			if (*haystack == *(needle + i))
			{
				return ((haystack + j));
			}
			i = 0;
			j++;
			haystack++;
			needle++;
		}
	}
	return (NULL);
}
