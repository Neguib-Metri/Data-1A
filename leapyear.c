#include <stdlib.h>
#include <stdio.h>

int main(int number,char** vector){
  int i;
  int T=0;

  int star= atoi(vector[1]);
  int final = atoi(vector[2]);

  for(i=star;i<= final;i++){
    if(i%4 ==0 && i%100 !=0){
      T++;
    }
  }
  printf("Total of leap years between %d y %d are %d\n",star,final,T);
}