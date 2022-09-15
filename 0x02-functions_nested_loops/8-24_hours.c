#include "main.h"

/**
 * jack_bauer - every minute of jack bauer 
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;
	int hrs_re;
	int mins_re;

	while (hrs <= 23)
	{
	while (mins <= 59)
	{
	mins_re = mins % 10; 
	hr_re = hrs % 10;
	_putchar(hrs / 10 + '0');
	_putchar(hrs_re + '0');
	_putchar(':');
	_putchar(mins / 10 + '0');
	_putchar(mins_re + '0');
	mins++;
	_putchar('\n');
	}
	hrs++;
	mins = 0;
}
}
