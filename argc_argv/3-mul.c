#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - mutiplication
 * @argv: name
 * @argc: number of argv
 * Return: reusult of mult.
 */
int main(int argc, char *argv[])
{
	int result = 0;

	if (argc > 1)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	if (argc < 1)
	{
		printf("error\n");
			return (1);
	}
	return (0);
}
