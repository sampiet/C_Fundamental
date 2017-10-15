#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc (const void * a, const void * b) 
{
   return ( *(int*)a - *(int*)b );
}

int main(int argc, char *argv[] )
{
    int numb  ;
    printf("Please,  how many numbers you will enter ? ") ;
    scanf("%d", &numb);
    int array[numb] ;
    for(int i=0; i<numb; i++)
    {
	printf("Enter the number ") ;
	scanf("%d", &array[i]) ;
    }
    printf("Before sorting the array is: \n");
    for( int j = 0 ; j < numb; j++ ) 
    {
    	printf("%d ", array[j]);
    } 
    qsort(array, numb, sizeof(int), cmpfunc);
    printf("After sorting the array is: \n");
    for(int  n = 0 ; n < numb; n++ ) 
    {
      printf("%d ", array[n]);
    } 
}


	
	


