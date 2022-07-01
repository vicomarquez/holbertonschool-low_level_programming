#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
/**
 * main - executes a function
 *@array: pointer
 *@size: pointer
 *Return: 0
 */
int main(char **argv, int argc)
{
	int (*hi)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	hi = get_op_func(argv[2]);
	if(!hi)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", hi(atoi(argv[1], atoi(argv[3])));
	return (0);
}
