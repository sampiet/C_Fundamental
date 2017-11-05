#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv)
{
    time_t t  ;
    const int  size = 10 ;
    int buff[size] ;
    int position[size];
    for(int i=0 ; i<size; i++)
    {
        int rand_value =rand()% size ;
        buff[i]= rand_value ;
    }
    for(int i=0 ; i<size; i++)
    { position[i]=0;
      for(int j=0; j<size; j++)
      {
        if(buff[j]==buff[i])
        {
          position[i]++;
        }
      }
    }
    for(int p=0 ;p<size ;p++)
    {
        printf("amount of duplication at position %d is %d \n",p, position[p]);
    }
    for(int p=0 ;p<size ;p++)
    {
        printf("The random buff at position  %d   is %d \n",p, buff[p]);
    }
}