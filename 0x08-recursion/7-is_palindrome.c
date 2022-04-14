#include "main.h"

/**
 * strlen_recursion - finds length of a string
 * @s: string to check
 * Return: length of s
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (1 + strlen_recursion(s));
}

/**
 * checker - checks a string
 * @s: string yo check
 * @len: length of the string
 * Return: 1 if s is a palindrome else return 0
 */

int checker(char *s, int len)
{
	if (len <= 1)
		return(1);
	else if (*s == *(s + len - 1))
		return (helper(s + 1, len - 2));
	else
		return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if s is a palindrome, else 0
 */

int is_palindrome(char *s)
{
	int len;

	len = strlen_recursion(s);

	if (len <= 1)
		return (1);

	return (checker(s, len));
}
