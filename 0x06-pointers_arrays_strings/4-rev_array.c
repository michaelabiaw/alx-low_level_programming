#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int dev;

	while (i < n--)
	{
		dev = a[i];
		a[i++] = a[n];
		a[n] = dev;
	}
}
