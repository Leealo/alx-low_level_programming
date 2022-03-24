#include "main.h"

/**
 * reverse_array - funciton will reverse integers in an array
 * @a: an array of integers
 * @n: number of elements to swap
 * Return: null
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
{
	n--;
	tmp = a[i];
	a[i] = a[n];
	a[n] = tmp;
}
}
