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
	min_re = min % 10; hrs_re = hr
	_putchar(hrs / 10 + '0');
	_putchar(hrs_re + '0');
	_putchar(':');
	_putchar(min / 10 + '0');
	_putchar(min + '0');
	min++;
	_putchar('\n');
	}
	hrs++;
	min = 0;
}
}
