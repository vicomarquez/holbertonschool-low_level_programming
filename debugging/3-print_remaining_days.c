#include "main.h"

/**
 * print_remaining_days - largest 3 numbers
 *@x: int to check
 *@y: int to check
 *@z: int to check
 *Return: 0
 */
void print_remaining_days(int x, int y, int z)
{

	if ((z % 4 == 0 && !(z % 100 == 0)) || (z % 400 == 0))
	{
		if (x > 2 && y >= 60)
			y++;
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 366 - day);
	}
	else 
	{
		if (x == 2 && y == 60)
			printf("Invalid date: %02d/%02d/%04d\n", x, y - 31, z);
		else
		{
			printf("Day of the year: %d\n", y);
			printf("Remaining days: %d\n", 365 - y);
		}
	}
}
