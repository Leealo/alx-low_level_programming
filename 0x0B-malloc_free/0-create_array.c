#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: size of array
 * @c: stored char
 * Return: pointer to an array of char
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (null);

	cr = malloc(sizeof(c) * size);

	if (cr == null)
		return (null);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
