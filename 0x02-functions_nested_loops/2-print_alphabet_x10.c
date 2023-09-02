#include "main.h"

/**
  *print_alphabet_x10 - function that print alphabets in lowercase ten times
  *Return: void
  */

void print_alphabet_x10(void)
{
	int i;
	char g;

	for (i = 0 ; i < 10 ; i++)
	{
		for (g = 'a' ; g <= 'z' ; g++)
			_putchar(g);
		_putchar('\n');
	}
}
