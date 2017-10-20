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
    int numb_guess =1;
    while(guess!=rand_numb)
    {
        if(guess <rand_numb)
        {
            printf("The number entered is low \n");
            printf("Please enter a new number \n");
            scanf("%d", &guess);
            numb_guess ++ ;
        }
        else 
        {
            if(guess>rand_numb)
            {
                printf("The number entered is high \n");
                printf("Please enter a new number \n");
                scanf("%d", &guess);
                numb_guess ++ ;
            }
        }
    }
    printf("The amount of number guess is %d\n", numb_guess);
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
