#include "main.h"
#include <stdio.h>
/**
 * _abs - compute the absolute value of an integer
 * @b: parameter for the function
 *
 * Return: Always 0.
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
