#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

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
	char a = '\0';
	char *b;
	int c = 1;

	b = &a;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (c = 1 ; c < argc ; c++)
	{
		j += strtol(argv[c], &b, 10);
		if (*b != '\0')
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%ld\n", j);
	return(0);
}
