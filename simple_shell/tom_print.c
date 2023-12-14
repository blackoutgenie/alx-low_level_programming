#include "shell.h"

/**
 * tom_print - function that prints out shell message
 * @message: message printed
 *
 * Return: Nothing
 */

void tom_print(const char *message)
{
	write(STDOUT_FILENO, message, strlen(message));
}
