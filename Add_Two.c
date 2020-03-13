#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//declare the principal functions
int add_two_nums(int num2,int num3);

int main (int argc, char** argv)
{
//convert the argument to numerical value
int num1 =atoi(argv[1]);
int num2 =atoi(argv[2]);
int num3 =atoi(argv[3]);

int results = add_two_nums(num2, num3);

printf("The sum of  %d + %d is %d\n:", num2, num3, results);
return(0);

}
int add_two_nums(int num2,int num3)
{
return num2 + num3;
}