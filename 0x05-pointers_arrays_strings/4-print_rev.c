#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev - prints a string, in reverse, followed by a new line
 *@s: string
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
