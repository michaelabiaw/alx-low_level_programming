#include<stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	printf("Size of char: %lu bytes\n", sizeof(c));
	printf("Size of int: %lu bytes\n", sizeof(i));
	printf("Size of long int: %lu bytes\n", sizeof(li));
	printf("Size of long long int: %lu byte\n", sizeof(lli));
	printf("Size of float: %lu byte\n", sizeof(f));
	return (0);
}
