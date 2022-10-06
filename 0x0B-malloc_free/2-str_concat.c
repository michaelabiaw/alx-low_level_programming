#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate 2 numbers
 * @s1: integer 1
 * @s2: integer 2
 *
 * Return: Always 0.
 */

int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
