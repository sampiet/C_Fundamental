#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main (int argc, char *argv[])
{
    int col= 5 ;
    int row= 3;
    int  matrix[row][col];
    int  matrix_transp[col][row];
    time_t t ;
    srand((unsigned) time(&t));
    for(int i=0 ; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            matrix[i][j]=rand()%10 ;
            matrix_transp[j][i]=matrix[i][j];
        }
    }
    printf("The transposed matrix is \n");
    printf("\n");
    for(int i=0; i<col;i++)
    {   
        for(int j=0; j<row; j++)
        {
            printf(" ");
            printf("%d", matrix_transp[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The random matrix is \n");
    printf("\n");
    for(int i=0; i<row;i++)
    {   
        for(int j=0; j<col; j++)
        {
            printf(" ");
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }


    


}