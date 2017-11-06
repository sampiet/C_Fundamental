#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmpfunc (const void * a, const void * b) 
{
    return ( *(int*)a - *(int*)b );
}
int cmpfunc_rev (const void * a, const void * b) 
{
    return ( *(int*)b - *(int*)a );
}
int main(int argc, char *argv[] )
{
    int numb  ;
    char *flag;
    flag= (char *)malloc(2*sizeof(char));
    printf("Please,  how many numbers you will enter ?") ;
    scanf("%s %d",flag , &numb);
    printf("The flag value is %s \n", flag);
    int array[numb] ;
    for(int i=0; i<numb; i++)
    {
        printf("Enter the number\n") ;
        scanf("%d", &array[i]) ;
    }
    printf("Before sorting the array is: \n");
    for( int j = 0 ; j < numb; j++ ) 
    {
    	printf("%d", array[j]);
    }
    const char flag_new[2]= "-r" ;
    if(strcmp(flag,flag_new)) 
    {
        qsort(array, numb, sizeof(int), cmpfunc_rev);
    }
    else
    {
        qsort(array, numb, sizeof(int), cmpfunc);
    }
   
    printf("After sorting the array is: \n");
    for(int  n = 0 ; n < numb; n++ ) 
    {
        printf("%d ", array[n]);
    } 
}


	
	



