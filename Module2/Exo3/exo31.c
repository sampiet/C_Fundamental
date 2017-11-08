#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
void safe_malloc(void *ptr);
int main(int argc, char *argv[] )
{
    float size=20000000000; 
    int *ptr ;
    ptr=malloc(size*sizeof(float));
    safe_malloc(ptr);
}
void safe_malloc(void *ptr)
{
    assert(ptr !=NULL);  
    printf("the memory  is allocated\n");
}