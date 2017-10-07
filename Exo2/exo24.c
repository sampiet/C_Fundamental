
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



bool Is_prime(int  numb) ;



int main(int argc, char *argv[] )
{
	char *oprd_l =argv[1];
	
	int numb = (int)strtol(oprd_l, NULL, 10);

	int cpt =0 ; ;

	if(Is_prime(numb))

	{
		for(int i=2 ; i<numb; i++)
		{
			if(Is_prime(i))
				{
					cpt++ ;
                                        printf("The primer nmber  %d \n", i);
				}

        }
         printf("The number is primer number \n");
         printf("The number of primer number below  %d \n", cpt);

    }

    else



    	printf("The number is not a primer  number \n");


 


	


}




bool Is_prime(int  numb)
{
	int val= 0;

	for(int i=2 ; i<numb;i++)
	{

		if((numb%i)==0)
			val=1 ;
	}

	if(val==0)
		return true ;
	else
		return false ;

			
	  
}





