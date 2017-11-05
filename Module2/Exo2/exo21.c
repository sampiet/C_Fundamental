#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    if(ptr==NULL)
    {
        printf("Error: the memory  is'nt allocated") ;
        exit(0);
    }
    else
    {
        printf("the memory  is allocated");
    }
}