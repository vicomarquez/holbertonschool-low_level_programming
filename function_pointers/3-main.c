#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
/**
 * main - executes a function
 *@argc: pointer
 *@argv: pointer
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int (*hi)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	hi = get_op_func(argv[2]);

	if (!hi)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == '0')
	{
		printf("Error\n");
		exit(100);
	}
	res = hi(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
