#include <unistd.h>
#include "main.h"

/**
 * _abs - returns absolute value of an int
 * @n: int to check
 * Return: an int which is the absolute vallue of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
