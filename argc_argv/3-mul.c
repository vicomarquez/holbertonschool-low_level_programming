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
	int a;
	int b;
	int c;	

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		c = a * b;
		a = strtol(argv[1], NULL, 10);
		b = strol(argv[2], NULL, 10);
		printf("%d\n", c);
		return (0);
	}
}
