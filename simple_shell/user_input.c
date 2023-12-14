#include "shell.h"

/**
 * read_command - function that reads simple shell command
 * @size: size of command
 * @command: command to be processed
 *
 * Return: Nothing
 */

void read_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			tom_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			tom_print("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
