#include "main.h"

/**
 * _strncpy - copies a strcpy
 * @dest: destination
 * @src: source
 * @n: bytes used from src
 * Return: point to src
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
