#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
void memcopy(char *ptr_dest, const char *ptr_source, size_t n) ;
int main(int argc, char *argv[] )
{ 
  
  char ptr_source[]="abcd" ;
  int size= strlen(ptr_source) ;
  printf("Size of the array %d\n", size);
  char *ptr_dest=(char*)malloc(size*sizeof(char));
  memcopy(ptr_dest, ptr_source,4);
  printf("Destination %s\n", ptr_dest);
  free(ptr_dest) ;
}
void memcopy(char *ptr_dest, const char *ptr_source,size_t n) 
{
  int size = (int) n  ;
  for(int i = 0 ; i<size; i++)
  {
  	*(ptr_dest +i) = *(ptr_source+i);
  }
}


