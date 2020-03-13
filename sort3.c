#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//intente utilizar como en Swap2Numbers pero no estoy seguro... 
int  Sort_3_Numbers( int a, int b, int c) ​​{
int temp = 0 ;

	if (a> c) {
	      temp = a;  
        a = c;
        c = temp;
	}
  if (b> c) {
        temp = b;  
        b = c;
        c = temp;
	}
  if (a> b) {
        temp = a;  
        a = b;
        b = temp;
}
printf ( " % d  % d  % d " , a, b, c);
}

int  main ( int argc, char ** argv) {
int  a= atoi (argv [ 1 ]);
int  b= atoi (argv [ 2 ]);
int  c= atoi (argv [ 3 ]);

Sort_3_Numbers(a, b, c);
}