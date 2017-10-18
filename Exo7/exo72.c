#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int max_array(int array[]) ;
int main (int argc, char **argv)
{
  int array[4]={3, 1, 5,6};
  printf("The max of the array is %d\n", max_array(array)) ;
}
int max_array(int array[])
{
  int size = (int)sizeof(array)/(int)sizeof(int);
  return size ;
} 


