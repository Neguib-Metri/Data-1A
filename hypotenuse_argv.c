#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//declare the principal functions
float add_two_floats(float,float);

int main (int argc, char** argv)
{
//convert the argument to numerical value
float leg1 =atof(argv[1]);
float leg2 =atof(argv[2]);
float leg3 =atof(argv[3]);
float results = add_two_floats(leg2, leg3);

printf("The hypotenuse of %f and  %f is %f\n:", leg2, leg3, results);
return(0);

}
float add_two_floats(float leg2,float leg3)
{
return sqrt(leg2*leg2 + leg3*leg3);
}