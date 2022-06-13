#include <stdio.h>
/**
 * main - does something
 *_putchar - adds a new line
 *@size: value to check
 *Return: always 0
*/

int main(void)
{
	char a;

	for (a = 0 ; a <= 100 ; a++)
	{
		if (!(a % 3))
		{
			if (!(a % 5))
				printf(" FizzBuzz");
			else
			printf(" Fizz")
	}
	else if (!(a % 5) && a % 3)
		printf(" Buzz");
	else
	{
		if (a > 1)
			printf(" %ld", a);
		else
			printf("%ld", a);
	}
	}
		_putchar('\n');
		return (0);
}
