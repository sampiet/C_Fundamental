#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int max_array(int array[], int size) ;

int main (int argc, char **argv)
{
  int array[4]={3, 1, 5,6} ;// Test code
  int size = (int)sizeof(array)/(int)sizeof(int) ;
  printf("The max of the array is %d\n", max_array(array, size)) ;
}

int max_array(int array[], int size)
{
  int  a = array[0] ;
  for(int i=1; i<size; i++)
  {
     if(a<array[i])
     {
        a=array[i] ;
     }
  } 
  return a  ;
}

