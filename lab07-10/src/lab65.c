#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

/**

 * @file lab65.c
 * @brief Файл з п'ятим завданням з лабораторної роботи №6
 * "Дано двовимірний масив NxN цілих чисел. Виконати циклічне зрушення елементів рядків масиву в напрямку справа наліво"
 * @author Ermakov Matthew.
 * @date 31-nov-2020
 * @version 0.1

*/

/**
 
 * @brief Функція заповнення масиву заданої довжини числами й циклічного його зрушення справа наліво
 * @param Одне ціле число
 * @return Логічну відповідь у консоль

*/

void matrixShift(const int N){
    int main[N][N];

    //заповнюємо масив випадковими однорозрядними числами
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            main[i][j] = rand() % 10;
        }
    }

    //виведення початкового масиву
    printf("%s","Исходная матрица: ");
    printf("\n");
    printf("\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", main[i][j]);
        }

        printf("\n");
        
    }
    
    printf("\n");
    printf("%s","Сдвинутая матрица: ");
    printf("\n");
    printf("\n");

    //зберігаємо в резерв першого елемента останньої строки
    int resmain[N][1];

    
    for (int i = 0; i < N; i++) {
        resmain[i][0] = main[i][0];
    
    }


    //Зсуваємо
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            main[j][i] = main[j][i + 1];
        }

    }
    
    //заносимо назад до резерву 
    for (int i = 0; i < N; i++) {
        main[i][N - 1] = resmain[i][0];
    }

    //Виводимо
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", main[i][j]);
                   
        }

     printf("\n");

    }
    
    
}

int main(){

    matrixShift(rand()%10);

    return 0;
    
}


