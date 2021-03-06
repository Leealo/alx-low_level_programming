#include <unistd.h>
#include "main.h"

/**
 * print_sign - checks sign of the passed int
 * and prints the sign
 * @n: int to check
 *
 * Return: 1 if n > 0 prints +
 * returns 0 if n = 0 prints 0
 * returns -1 if n < 0 prints -
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
