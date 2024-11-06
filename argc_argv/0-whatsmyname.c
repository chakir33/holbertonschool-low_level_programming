#include <stdlib.h>
#include <stdio.h>
/**
 * main - print argv
 * @argv: name
 * @argc: number of argv
 * Return: argv.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
