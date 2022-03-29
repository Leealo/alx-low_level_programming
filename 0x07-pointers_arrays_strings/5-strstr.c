#include "main.h"

/**
 * _strstr - finds occurrence of substring
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to start of substring
 * or null if no substring is located
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle [j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				p = &haystack[i];
				while (haystack[i] == needle[j])
				{
					i++;
					j++;
					if (haystack[i] == ' ')
						return (p);
				}
			}
		}
	}
	return (0);
}
