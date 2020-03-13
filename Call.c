#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inc_count(int *count_ptr)
{
	(*count_ptr)++;
}

int main()
{
	int count = 0; 
	while (count < 10){
	inc_count(&count);
	printf("Count %d\n", count);
	printf("Count %p\n", &count);
}
return (0);
}