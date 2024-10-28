#include "main.h"

/**
 * _isupper - print 1 if its isupper
 *@c: letter
 * Return: return 0
 **/

int _isupper(int c)
{
	if (c == 'A' && c <= 'Z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
	return(c);
}
