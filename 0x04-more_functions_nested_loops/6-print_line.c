#include "main.h"

/**
 * print_line - prints straight line a specified amount of times
 * @n: times to print straight line
 * Return: null
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
