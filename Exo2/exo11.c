#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>


int main(int argc, char *argv[] )

{
	int  array[4]={8,17, 25, 1000} ;
	for(int i = 0; i<4;i++)
	{
		char *ptr =(char*)malloc(10*sizeof(char));
		printf("The address of the pointer is %p\n", ptr) ;
		//free(ptr);
	}

}
