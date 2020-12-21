/**
*@author Ermakov Matthew
*@date 20.12.2020
*@version 0.1
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int const N = 7;

    int mas[N];

    int res[N];

    int result[N*2];
    
    //заповнюємо початковий масив випадковими числами
    for (int i = 0; i < N; i++)
    {
        mas[i] = rand()%10;
    }

    int *pmas;
    int *pmas1;

    //обнуляємо результуючий масив
    for (int i = 0; i < N; i++)
    {
        res[i] = 0;
    }

    //перевіряємо на схожість кожне число. Якщо так, додаємо до результуючого масиву 1.
    for (int i = 0; i < N; i++)
    {
        pmas = (mas + i);

        for (int j = 0; j < N; j++)
        {
            pmas1 = (mas + j);                   
            
            if ((*pmas) == (*pmas1)){  
                res[j]++;            
            } 

        }
        
    }
    
    //обнуляємо кінцевий масив
    for (int i = 0; i < N*2; i++)
    {
        result[i] = 0;
    }

    int k = 0;

    int *presult;
    int *pres1;

    //заповнюємо кількість повторів цифр у масиві
    for (int i = -2; i < (N*2); i+=2)
    {
        presult = (result + i + 2);
        pres1 = (res + k);
        *presult = *pres1;
        k++;
    }

    int c = 0;
    
    //заповнюємо самі числа 
    for (int i = -1; i < (N*2); i+=2)
    {
        pmas = (mas+c);
        result[i+2]=(*pmas);
        c++;
    }
    
    //виводимо результат
    printf("Початковий масив чисел: \n");

    for (int i = 0; i < N; i++)
    {
        pmas = (mas + i);
        printf("%d ", *pmas);
    }

    printf("\n");
    printf("\n");

    printf("Кількість повторювань кожного числа: \n");

    for (int i = 0; i < N*2; i++)
    {
        printf("%d ", result[i]);
    }
    
}


