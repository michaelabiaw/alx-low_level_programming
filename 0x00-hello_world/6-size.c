#include<stdio.h>
int main(void) 
{
	
	char c;
	int i;
	long int li;
	lon long int lli;
	float f;
   

    /* sizeof evaluates the size of a variable */
    printf("Size of char: %lu bytes\n", sizeof(c));
    printf("Size of int: %lu bytes\n", sizeof(i));
    printf("Size of long int: %lu bytes\n", sizeof(li));
    printf("Size of long long int: %lu byte\n", sizeof(lli));
    printf("Size of float: %zu byte\n", sizeof(f));
    return 0;
}
