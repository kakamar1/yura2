#include <stdio.h>
#include "lib.h"
int matrWork (int *matr, int size)
{
    int j;
    for (j=0; j<size; j++)
    {
        if(*(matr+j)%3==0)
        {

            *(matr+j)=1;
        }
    }
    for (j=0; j<size; j++)
    {
            printf("%d ",*(matr+j));
            if(j==4)
            {
                printf("\n");
            }
            if(j==9)
            {
                printf("\n");
            }
            if(j==14)
            {
                printf("\n");
            }
            if(j==19)
            {
                printf("\n");
            }
            if(j==24)
            {
                printf("\n");
            }
            if(j==29)
            {
                printf("\n");
            }
    }
}

