#include "shell.h"

/**
 * execute_command - function that execute simple shell command
 * @command: command executed
 *
 * Return: 0
 */

void execute_command(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		tom_print("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char *args[120];
		int arg_count = 0;

		char *token = strtok((char *)command, " ");


		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;

		execvp(args[0], args);

		tom_print("Error executing command.\n");
		exit(EXIT_FAILURE);
	}
	else if (wait(NULL) == -1)
	{
		perror("Error waiting for child process.\n");
		exit(EXIT_FAILURE);
	}
}
