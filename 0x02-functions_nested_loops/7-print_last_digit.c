#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @b: is the function's parameter
 *
 * Return: Always 0.
 */
int print_last_digit(int b)
{
	int last = b % 10;
	if (last < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);	

}

