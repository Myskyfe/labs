#include <stdio.h>

int main(){

    //объявляем длинну массива
    const int N = 10;

    //объявляем заполняем массив числами
    int arr[10] = {5, 6, 3, 8, 3, 10, 0, 12, 13, 14};

    int max, k, num, x;

    k = max = 0;
    
    int * parr;
    int * parr1;

    //перезаполняем изначальный массив числами наибольшей цепью последовательных чисел
    for (int i = 0; i < N - 1; i++)
    {
        parr = (arr + i);
        parr1 = (arr + i + 1);
        if (*parr1 > *parr)
        {
            k++;
        }
        else{
            k = 0;
        }
        if (k > max)
        {
            max = k;
            num = i + 1;
        }
    }
    max++;
    x = num - max + 1;
    
    printf("НачальнbIй массив: \n");
    
    for(int i = 0; i < N; i++){
    
    	printf("%d ", arr[i]);
    
    }
    printf("\n");
    
    printf("Самая большая цепь: \n");
    
    //выводим результат
    for (int i = x; i < max + x; i++)
    {
        parr = (arr + i);
        printf("%d ", *parr);
    }
    
    printf("\n");

}

