#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void){
	int x = 0;

	printf("%p\n", (void*)&x); //use & to retrieve the address of a variable
	// (%p formats an object ponter of type void*)
	// == prints some address in membry.
	// pointers start with * on their generation

	int *px, not_a_pointer; // px is a pointer to an int
	px = &x; //stores the address of x to px
	printf("%p\n", (void*)px);
	printf("%zu, %zu\n", sizeof(px), sizeof(not_a_pointer)); //prints "8 and 4" on a typical 64 sistem



	printf("%d\n", *px); // prints 0, the value of x
	(*px)++; //increment te value px is pointing to by 1
	printf("%d\n", *px); // x -- prints 1
	printf("%d\n", x); // --Prints 


	int x_array[20];
	int xx;
	for (xx = 0; xx < 20; xx++) {
	x_array[xx]=20-xx;
	} //inirialize x array to 20,19,18,17...... and so on
	int* x_ptr = x_array;
	int arr[10];
	//int (*ptr_to_arr)[10] = &arr;
//char otherarr[] = "foobarbazquirk";
//int arratthethird[10];
//int *ptr = arratthethird[10] 
	printf("%d\n", *(x_ptr + 1)); //Prints 19
	printf("%d\n", x_array[1]); //Prints 19



return 0;

}