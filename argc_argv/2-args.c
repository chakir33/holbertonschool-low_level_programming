#include <stdlib.h>
#include <stdio.h>
/**
 * main - print word after ./ and \n
 * @argv: name
 * @argc: number of argv
 * Return: argv.
 */
int main(int argc, char *argv[])
{
	int i;
	(void) argc;

	for (i = 0; argv[i]; i++)

	printf("%s\n", argv[i]);

	return (0);
}
