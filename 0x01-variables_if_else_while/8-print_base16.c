#include <stdio.h>

/**
 * main - program prints numbers bwtween 0 and 9 and letters andletters between a a to f
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch;
	
	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (i = 97; i <= 102; i++)
		putchar((int)i);
	putchar('\n');
	return (0);
