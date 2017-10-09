#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>







int main(int argc, char *argv[] )

{ 
	char *oprd_l =argv[1];
	int numb = (int)strtol(oprd_l, NULL, 10);
	int numb2 = (int)strtol(oprd_l, NULL, 10);
	int lenght= (int)strlen(oprd_l) ;
	int  sum = 0;

	for(int i=0 ; i<lenght;i++)
	{
		double   dig= numb % 10 ;
	
		sum += (int)pow(dig, 3.0) ;
		numb= numb/10 ;



	}
	


	if(sum==numb2)
	{

	   printf("The number is Amstrong") ;
	}
	else
	{
           printf("The number is NOT Armstrong") ;



	}




 



}
