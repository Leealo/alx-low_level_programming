#include <unistd.h>
#include "main.h"

/**
 * _isalpha - checks for an alphabet
 * @c: character to check
 *
 * Return: 1 if c is an alphabet
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90 || (c >= 97 && c <= 122))
			return (1);
			else
			return (0);
			}
