#include "main.h"

/**
 * main - print alphabet in lower case
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	for(c= 'a', c <= 'z', c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
