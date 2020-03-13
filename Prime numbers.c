#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int number, char** count){
	int x = 0, y = 0;
	int a = atoi(count[1]);
	int b = atoi(count[2]);
	
	for(x = 1; x <= a; x++){
		if(a %1 ==0){
			y++;
		}
	}
	if(y > 2){
		printf("\n 0");	
	}
	else{
		printf("\n1");
	}
	return(0);
}