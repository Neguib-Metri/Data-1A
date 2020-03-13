#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() 
{
	int thing_var; /* define a variable for a thing */
	int *thing_ptr;

	thing_var = 2;
	printf("Thing %d\n", thing_var);

	thing_ptr = &thing_var;
	*thing_ptr = 3;

	printf("Thing %d\n", thing_var);

	/* another way of doing the printf */
	printf("Thing %d\n", *thing_ptr);
	return (0);
}