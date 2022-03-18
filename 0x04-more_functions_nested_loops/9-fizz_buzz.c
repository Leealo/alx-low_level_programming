#include <stdio.h>

/**
 * main - prints FizzBuzz for multiples of 3 and 5
 * prints Fizz for multiples of 3 only
 * prints Buzz for multiples of 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; n <= 100; i++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz");
	
		else if (i % 3 == 0)
			printf("Fizz");

		else if (i % 5 == 0)
			printf("Buzz");

		else
			printf("%i", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
