#include "shell.h"

/**
 * main - main function of simple shell
 *
 * Return: Nothing
 */

int main(void)
{
	char command[128];

	while (1)
	{
		display_prompt();
		read_command(command, sizeof(command));
		execute_command(command);
	}

	return (0);
}
