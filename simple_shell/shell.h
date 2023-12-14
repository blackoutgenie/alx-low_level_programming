#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/wait.h>


void display_prompt(void);
void tom_print(const char *message);
void execute_command(const char *command);
void read_command(char *command, size_t size);



#endif 
