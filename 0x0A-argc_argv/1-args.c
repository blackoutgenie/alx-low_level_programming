#include <stdio.h>

/**
 * main - program that prints agruments passed into it
 * @argc: argument count
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
