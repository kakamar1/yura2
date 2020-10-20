#include <stdio.h>
#include <locale.h>
#include <time.h>
#include "load.h"
#define N 6
#define M 5
#define K 76
int main(void)

{

    int b[N][M], a[K];
    setlocale(LC_ALL, "rus");
//заполнение
    int i, j;
    for(i = 0; i < N; i++)
        for(j = 0; j < M; j++)
            b[i][j] = (rand() % 100)-50;
    for(i = 0; i < K; i++)
        a[i] = (rand() % 100)-50;

//вывод
    printf("Исходная матрица\n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
            printf ("%d ", b[i][j]);
        printf("\n");

    }
    printf("\n");
    printf("Исходный массив\n");
    for(i = 0; i < K; i++)
        {
           printf("%d ",a[i]);
        }
        printf("\n");
        printf("\n");
    i=0, j=1;
    printf("Выберите, с чем хотите работать:\n1 - В массиве A.\n2 - В матрице B,\n3 - Выход\n");

    while(j)

    {
        scanf("%d",&i);
        if(i==1){
        printf("Обработанный массив\n");
        LoadRun("mas.dll", i, a, K);
        }

        if(i==2){
        printf("Обработанная матрица\n");
        LoadRun("matr.dll", i, b, N*M);
        }
        if(i==3)
            j=0;
    }
    system ("pause");
    return 0;
}
