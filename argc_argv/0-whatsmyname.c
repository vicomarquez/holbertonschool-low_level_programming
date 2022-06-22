#include <stdio.h>

/**
 * main - prints the programs name
 *
 *@argc: counter
 *
 *@argv: arrays vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 0)
		argc++;
	printf("%s\n", argv[0]);
	return (0);
}
