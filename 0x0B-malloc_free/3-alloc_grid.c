#include "main.h"

/**
  *alloc_grid - returns a pointer to 2 dimensional array of integers
  *@width: parameter 1
  *@height: parameter 2
  *Return: pointer to array
  */

int **alloc_grid(int width, int height)
{
	int **output;
	int j, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (i = 0; i < height ; i++)
	{
		output[i] = malloc(sizeof(int) * width);

		if (output[i] == NULL)
		{
			free(output);
			for (j = 0; j <= height; j++)
				free(output[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			output[i][j] = 0;
	}
	return (output);
}
