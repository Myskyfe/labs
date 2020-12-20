#include <stdio.h>

int main(){

    //передаем длиину массива
    int const N = 8;

    //объявлем числа в массиве
    int mas[8] = {4, 7, 1, -5, 1, 1, 5, 4};

    //делаем указатель на массив (таким образом и будем указывать далее)
    int *pmas;

    int count = 0;

    int parts = 1;
	
    int i;

    //считаем кол-во частей с положительными последовательностями
    for (i = 0; i < N; i++)
    {
        pmas = (mas +i);

        if (*pmas > 0)
        {
            count += *pmas;
        }else
        {
            parts++;
        }
        
    }

    //объявлем массив сумм всех положительных последовательностей
    int sum[N];
    int * psum;
    
    //обнуляем его
    for (int j = 0; j < N; j++)
    {
       psum = (sum + j);
       *psum = 0;
    }

    //обьявлем массив результата суммы
    int result[parts];
    int *presult;

    //обнуляем его
    for (i = 0; i < parts; i++)
    {
        presult = (result + i);
        *presult=0;
    } 

    int c = 0;
    i = 0;

    //заносим сумму каждой положительной последовательности в определенный элемент массива result
    while (i < parts)
    {
        for (int j = c; j < parts; j++)
        {
            presult = (result + i);

            while (mas[c] > 0)
            {

                *presult += mas[c];
                c++;

            }

            c++;
            i++;
        }
    }

    int biggestSum = 0;
    int * presult1;
    
    //находим среди элементов массива result наибольший - он и будет суммой наибольшой положительной цепи
    for (i = 0; i < parts; i++)
    {
        presult = (result + i);
        for (int j = 1; j < parts; j++)
        {
            presult1 = (result + j);

            if (*presult > *presult1)
            {
                biggestSum = *presult;
            }
        }
        
    }

    int suma = 0;

    int counter = 0;

    i = 0;
    c = 0;
    int a = 0;
    int quantity = 0;

    //перебираем каждый элемент массива, затем суммируем его в переменную suma. Проверяем на схожесть с самой большой суммой. Если да, то заносим в переменную quantity
    while (i < parts)
    {
        for (int j = c; j < parts; j++)
        {
            while (mas[c] > 0)
            {
                suma += mas[c];

                c++;
                a++;
                if (suma == biggestSum)
                {
                    counter++;
                    quantity += a;
                }
            
            }
            suma = 0;
            a = 0;
            c++;
            i++;
        }
    }

    suma = 0;

    counter = 0;

    i = 0;
    c = 0;
    a = 0;

    int preFinalArr[quantity];
    int * ppreFinalArr;

    //заносим в массив preFinalArr все элементы большей положительной последовательности (получается в обратном порядке)
    while (i < parts)
    {
        for (int j = c; j < parts; j++)
        {
            while (mas[c] > 0)
            {
                suma += mas[c];

                c++;
                a++;
                if (suma == biggestSum)
                {
                    for (int k = 1; k <= quantity; k++)
                    {
                        ppreFinalArr = (preFinalArr + k - 1);

                        *ppreFinalArr = mas[c-k];
                    }
                    
                }
            
            }
            suma = 0;
            a = 0;
            c++;
            i++;
        }
    }

    int finalArr[quantity];
    int * pfinalArr;

    //сортируем массив в правильном порядке
    for (i = 0; i < quantity; i++)
    {
        pfinalArr = (finalArr + i);
        ppreFinalArr = (preFinalArr + quantity - i - 1);

        *pfinalArr = *ppreFinalArr;
    }

    //выводим результат
    printf("Изначальный массив чисел: ");
    printf("\n");

    for (i = 0; i < N; i++)
    {
        pmas = (mas + i);
        printf("%d ", *pmas);
    }

    printf("\n");
    
    printf("Массив положительной цепи чисел в массиве, сумма которых больше остальных положительных цепей: \n");

    for (i = 0; i < quantity; i++)
    {
        pfinalArr = (finalArr + i);
        printf("%d ", *pfinalArr);
    }

}


