#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: accepted bytes
 * Return: number of bytes accepted
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	if (s[0] == '\0' || accept[0] == '\0')
		return (0);

	for (i = 0; s[i] !='\0'; i++)
	{
		if (bool != i)
			break;

		for (j = 0; accept[j] != '0'; j++)
		{

			if (s[i] == accept[j])
			{
				bool++;
				break;
			}
		}
	}
	return (bool);
}
