#include <stdio.h>

/**
* main - Prints the alphabet in lowercase, and then in uppercase.
*
* Return: Always 0.
*/
int main(void)
{
	char j;
	for (j = 'b'; j <= 'q'; j++)
	putchar(j);
	for (j = 'B'; j <= 'Q'; j++)
	putchar(j);
	putchar('\n');
	return (0);
}
