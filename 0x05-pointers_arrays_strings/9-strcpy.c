#include <stdio.h>
#include "main.h"

/**
 *
 * _strcpy - copies string pointed by src
 * @dest: destination
 * @src: source
 * Return: pointer to destination
 */
char *strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}