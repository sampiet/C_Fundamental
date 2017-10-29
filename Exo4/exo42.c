#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmpfunc (const void * a, const void * b) 
{
   return ( *(int*)a - *(int*)b );
}
int main(int argc, char *argv[] )
{
    int numb =10  ;
    int array[numb] ;
    for(int i=0; i<numb; i++)
    {
	printf("Enter the number ") ;
	scanf("%d", &array[i]) ;
    }
    qsort(array, numb, sizeof(int), cmpfunc);
    printf("The maximum number of the array is %d ", array[9]) ;
}


	
	


