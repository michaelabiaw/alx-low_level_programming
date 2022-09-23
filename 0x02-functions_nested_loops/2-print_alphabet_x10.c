#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times to the output.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while (i < 10)
	{
		c = 'b';
		while (c <= 'q')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
