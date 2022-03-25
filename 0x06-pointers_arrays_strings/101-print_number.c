#include "main.h"

/**
 * print_number - print an integer
 * @n: input integer
 * Return: null
 */
void print_number(int n)
{
	if (n / 10)
	{
		print_number(n / 10);

		n %= 10;

		if (n < 0)

			n *= -1;
	}
	else

		if (n < 0)
		{
			_putchar('-');

			n *= -1;
		}
	_putchar (n + '0');
}
