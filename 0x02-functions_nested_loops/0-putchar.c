#include <stdio.h>
#include "main.h"
#ifndef main_h
#define main_h

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *ch = "Hello";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');

	return (0);
}

