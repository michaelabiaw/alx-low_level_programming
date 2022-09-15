#include "main.h"

/**
 * jack_bauer - every minute of jack bauer 
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hrs = 0;
	int min = 0;
	int hr_re;
	int min_re;

	while (hrs <= 23)
	{
	while (min <= 59)
	{
	min_re = min % 10; 
	hr_re = hrs / 10;
	_putchar(hr / 10 + '0');
	_putchar(hr_re + '0');
	_putchar(':');
	_putchar(min / 10 + '0');
	_putchar(min_re + '0');
	min++;
	_putchar('\n');
	}
	hrs++;
	min = 0;
}
}
