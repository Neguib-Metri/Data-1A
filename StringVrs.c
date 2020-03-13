#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void str_reverse(char *str_in)
{
	char tmp;
	size_t ii = 0;
	size_t len = strlen(str_in);
	for(ii = 0; ii < len /2; ii++);{
	tmp =str_in[ii];
	str_in[ii] = str_in[len-ii-1];
	str_in[len-ii-1] = tmp;
	}
}


