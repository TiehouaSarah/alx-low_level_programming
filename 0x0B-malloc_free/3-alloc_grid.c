#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - return 2-dimensional array
 *
 * @width: first parameter
 *
 * @height: second parameter
 *
 * Description: nothing to say
 *
 * Return: Return NULL if size = 0 / pointer to array/NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **dimensionalArrayToReturn;
	unsigned int j, i;

	i = 0;
	j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	dimensionalArrayToReturn = (int **) malloc(sizeof(int *) * height);
	if (dimensionalArrayToReturn == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		dimensionalArrayToReturn[i] = (int *) malloc(sizeof(int) * width);
		if (dimensionalArrayToReturn[i] == NULL)
		{
			free(dimensionalArrayToReturn);
			for (j = 0; j <= i; j++)
				free(dimensionalArrayToReturn[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			dimensionalArrayToReturn[i][j] = 0;
		}
	}

	return (dimensionalArrayToReturn);
}
