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
	char s1[98] = "Hello ";
	char s2[] = "World!";
	
	/* concateneate char dest, cha src */
	strcat(s1, s2);
	puts(s1);
   	puts(s2);

   	return 0
}
