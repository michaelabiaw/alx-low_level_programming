#include "main.h"
#include <stdio.h>

/**
*swap_int - swaps the values of two integers
*@a: integer one
*@b: integer two
*Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
