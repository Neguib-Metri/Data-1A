#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void swapTwoNumbers(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b =temp;
}

int main()
{
int a=3;
int b=9;

printf("a=%d\n && b=%d\n", a , b);
swapTwoNumbers(&a,&b);
printf("a = %d\n && b= %d\n", a , b);
return (0);
}