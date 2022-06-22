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
	long a = 0;
	int i;
	char f = '\0';
	char *p;

	p = &f;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
		for (i = 1; i < argc; i++)
		{
			a += strtol(argv[i], &p, 10);
			if (*p != '\0')
		{
			printf("Error\n");
			return (1);
		}
	}

		printf("%ld\n", a);

		return (0);
}
