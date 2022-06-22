#include <stdio.h>
#include <stdlib.h>

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
	long j;
	long k;	

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = strtol(argv[1], NULL, 10);
		k = strtol(argv[2], NULL, 10);
		printf("%d\n", j * k);
		return (0);
	}
}
