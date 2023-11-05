#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked -  allocates memory using malloc.
* @b: size
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
