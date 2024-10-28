#include "main.h"

/**
 *  _isdigit - print 1 if its number
 *@c: letter
 * Return: return 1 if its number
 **/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
