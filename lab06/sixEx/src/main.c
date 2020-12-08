#include <stdio.h>

int main()
{
   
    const int N = 3;
    int mas[N][N];
    int res[N][N];
    //Заполнение массива
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            mas[i][j] = rand() % 10;
        }
    }
    //вывод массива 

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d", mas[i][j]);
            printf(" ");
        }printf("\n");
        printf("\n");
    }
    printf("\n");
    //УМНОЖЕНИЕ
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int  j = 0; j < N; j++)
        {
            for (int q = 0; q < N; q++)
            {
                sum = sum + mas[q][i] * mas[j][q];



            }
            res[j][i] = sum;
            sum = 0;
        }
    }


    //ВЫВОД РЕЗУЛЬТАТА
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", res[i][j]) ;
        }printf("\n");
        printf("\n");
    }
}