#include <stdio.h>
/**
 * main - does something
 *
 *Return: always 0
*/

int main(void)
{
	char a;

	for (a = 1 ; a <= 100 ; a++)
	{
		if (!(a % 3))
		{
			if (!(a % 5))
				printf(" FizzBuzz");
			else
			printf(" Fizz");
	}
	else if (!(a % 5) && a % 3)
		printf(" Buzz");
	else
	{
		if (a > 1)
			printf(" %d", a);
		else
			printf("%d", a);
	}
	}
		putchar('\n');
		return (0);
}
