#include <stdio.h>
#include <stdlib.h>

int (int x){
int a = x, int b= 0, y
	while(x > 0) {
		cont = x%10;
		x /=10;
		a = b*10+cont;
	}
	if(a == b) {
		printf("%i is a Mirror\n", a);
	}
	else {
		printf("%i is not a Mirror\n", a);
	}
	system("pause");
	return(0);	
}
int main(int argc,char** argv){
int x =atoi(argv[1]);
}