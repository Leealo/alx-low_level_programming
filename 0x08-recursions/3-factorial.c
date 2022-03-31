#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to find factorial
 * Return: factorial of n is > 0, return -1
 * if n < 0 to show an error
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
