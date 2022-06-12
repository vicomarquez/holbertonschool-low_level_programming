 #include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: 0
 */
void times_table(void)
{
	int x, y, z;
	char ab, cd;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			z = x * y;
			if (z >= 10)
			{
				ab = (z % 10) + '0';
				cd = z;
				while (cd >= 10)
					cd = (cd / 10);
				cd = cd + '0';
			}
			else
			{
				ab = z + '0';
				cd = ' ';
			}
			if (y != 0)
			{
				_putchar(' ');
				_putchar(cd);
			}
			_putchar(ab);
			if (y != 9)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}
