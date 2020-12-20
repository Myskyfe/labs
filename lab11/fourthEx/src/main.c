#include <stdio.h>
#include <stdlib.h>

int main(){
    
    const int N = 6;

    int mas[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            mas[i][j] = (rand() % 10);
        }
        
    }

    int mainDiagQuantity = N;

    int result[mainDiagQuantity];

    for (int i = 0; i < mainDiagQuantity; i++)
    {
        result[i] = 0;
    }

    for (int i = 0; i < mainDiagQuantity; i++)
    {
        result[i] = mas[i][i];
        
    }

    printf("Начальный массив: \n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", mas[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Главная диагональ: \n");
    
    for (int i = 0; i < N; i++)
    {
        printf("%d ", result[i]);
    }
    

}