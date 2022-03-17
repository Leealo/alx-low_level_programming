#include "main.h"

/**
 * _isdigit - check if number is between 0 and 9
 * @c: number
 * Return: 1 if number is found, otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
