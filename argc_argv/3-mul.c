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
		scanf("%d", &a);
		scanf("%d", &b);
		c = a * b;
		printf("%d\n", c;
	}
	return (0);
}
