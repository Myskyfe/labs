#include <stdio.h>
#include <stdlib.h>

/**

 * @file lab66.c
 * @brief Файл з шостим завданням з лабораторної роботи №6
 * "Дано двовимірний масив NxN цілих чисел. Помножити матрицю саму на себе"
 * @author Ermakov Matthew.
 * @date 02-dec-2020
 * @version 0.1

*/

/**
 
 * @brief Функція заповнення масиву заданої довжини числами і його множення самого на себе за правилом множення матриць
 * @param Одне ціле число
 * @return Логічну відповідь у консоль

*/


void multiplyMatrix(const int N){

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

int main()
{
    //вывод функции
    multiplyMatrix(3);
   
    return 0;

}
