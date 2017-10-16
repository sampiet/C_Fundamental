#include <stdio.h>

#include <stdlib.h>

#include <time.h> 


int main(void)

{
    srand(time(NULL));
    printf("Please enter the max random number");
    int max ;
    scanf("%d", &max);
    printf("Please enter the min random number");
    int min ;
    scanf("%d", &min);
    int rand_numb= rand()%((max-min)) + min;
    printf("Please, guess the random number \n");
    int guess ;
    scanf("%d", &guess);
    if(guess==rand_numb)
    {
    	printf("you guessed the good number\n");
    }
    else
    {
    	 printf("this is not the good number\n") ;
    	 printf("the random number is %d\n", rand_numb) ;
    }
    return 0;

}
