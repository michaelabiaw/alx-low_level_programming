#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function that changes lowercase to uppercase
 *@s: string to be changed
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
