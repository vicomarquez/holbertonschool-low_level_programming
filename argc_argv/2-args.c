#include <stdio.h>

/**
 * main - prints all arguments
 *
 *@argc: counter
 *
 *@argv: arrays vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	for(n = 0 ; n < argc ; n++)
		printf("argv[%2d]: %d\n", n, argv[n]);
	return (0);
}
