#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed.
 * @dest: parameter 1
 * @src: parameter 2
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';


	return (dest);
}
