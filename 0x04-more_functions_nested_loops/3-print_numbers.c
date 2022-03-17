#include "main.h"

/**
 * print_numbers - prints numbers between 0 and 9
 * Return: null
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
