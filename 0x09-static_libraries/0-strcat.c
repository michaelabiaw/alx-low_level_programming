#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings.
 * @dest: parameter 1
 * @src: parameter 2
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != 0)
		ptr++;
	while (*src != 0)
		*ptr++ = *src++;
	*ptr = 0;
   	return (dest);
}
