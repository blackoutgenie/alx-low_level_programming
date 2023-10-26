#include "main.h"

/**
 * _pow_recursion - function that returns tha value of x raised to powre of y
 * @x: the value to multiply
 * @y: the times to multiply value 
 *
 * Return: Always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
