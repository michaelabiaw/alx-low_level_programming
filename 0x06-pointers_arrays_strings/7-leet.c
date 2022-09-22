#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @str: encoded string
 *
 * Return: Always 0.
 */

char *leet(char *str)
{
	int indx1 = 0, indx2;
	char leet[10] = {'O', 'D', '!', 'B', 'A', '!', '!', 'T'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 <= 9; indx2++)
		{
			if (str[indx1] == leet[indx2] ||
			    str[indx1] - 32 == leet[indx2])
				str[indx1] = indx2 + '0';
		}

		indx1++;
	}

	return (str);
}
