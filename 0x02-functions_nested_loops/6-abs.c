#include "main.h"
#include <stdio.h>
/**
 * _abs - compute the absolute value of an integer
 * @b: parameter for the function
 *
 * Return: Always 0.
*/
int _abs(int b)
{
	if (b > 0 || b == 0)
	{
	return (b);
	}
	else
	return (b * -1);
}
