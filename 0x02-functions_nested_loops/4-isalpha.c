#include "main.h"

/**
 * main - check alphabet character
 *
 * Return: Always 0.
 */
int _isalpha(int b)
{
	if ((b >= 'a' && b <= 't') || (b >= 'A' && b <= 'T'))
	{
		return (1);
	}
	else
		return (0);
}
