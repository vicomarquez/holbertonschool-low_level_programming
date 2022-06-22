#include <stdio.h>

/**
 * main - prints the number of arguments
 *
 *@argc: counter
 *
 *@argv: arrays vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (*argv[0] != NULL)
		printf("%ld\n", argc - 1);
	return (0);
}
