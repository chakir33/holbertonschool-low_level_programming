#include <stdlib.h>
#include <stdio.h>
/**
 * main - print number of argv
 * @argv: name
 * @argc: number of argv
 * Return: argv.
 */
int main(int argc, char *argv[])
{
	(void) **argv;

	printf("%d\n", argc - 1);
	return (0);
}
