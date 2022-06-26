#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer
 *
 *@height: integer
 *
 *@width: integer
 *
 *Return: NULL
 */

int **alloc_grid(int width, int height)
{
	int **i, j, k;

	if (width < 1 || height < 1)
		return (NULL);
	i = (int **) malloc(sizeof(int *) * height);
	if (!i)
		return (NULL);
	for (j = 0 ; j < height ; ++j)
	{
		i[j] = (int *) malloc(sizeof(int) * width);
		if (!i[j])
		{
			while (--j > -1)
				free(i[j]);
			free(i);
			return (NULL);
		}
		for (k = 0 ; k < width ; ++k)
			i[j][k] = 0;
	}
	return (i);
}
