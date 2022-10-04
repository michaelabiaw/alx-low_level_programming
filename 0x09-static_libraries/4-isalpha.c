#include "main.h"

/**
 * _isalpha - check alphabet character
 *@c: paramater
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 't') || (c >= 'A' && c <= 'T'))
	{
		return (1);
	}
	else
		return (0);
}
