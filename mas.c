#include <stdio.h>
#include "lib.h"
int masWork (int *mas, int size)
{
    int i;
    for (i=0; i<size; i++)
    {
        if(mas[i]%3==0)
        {
            mas[i]=1;
        }
    }
    for (i=0; i<size; i++)
    {
        printf("%d ",mas[i]);
    }
}
