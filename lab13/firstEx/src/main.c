/**
 * @author Ermakov Matthew
 * @date 21-dec-2020
 * @version 0.1
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

//функция для сортировки строк по алфавиту
int toAlphabet (const void * a, const void * b)
{
    return strcmp(*(char**)a,*(char**)b);
}

int main()
{ 
    const int N = 28;
    char string[N] = "b g a c b t d k z b s k u e";
    
    char sep[10]=" ";
    // Переменная, в которую будут заноситься начальные адреса частей
    // строки str
    char *istr;

    // Выделение первой части строки
    istr = strtok (string,sep);

    int k = 0;

    char * s[200];

    //выделение последующих частей и занесение из изначального массива в массив s
    while (istr != NULL)
    {
        s[k] = istr;
        istr = strtok(NULL,sep); 
        k++;
    }

    printf("Изначальная строка: \n");
    //вывод результатов на экран
    for(int i =0; i<k; i++){

        printf("%s ", s[i]);

    }
    printf("\n");

    printf("\n");

    printf("Количество слов в строке: \n");

    printf("%d\n", k);

    printf("\n"); 
 
    //сортировка по возрастанию
    qsort(s, k, sizeof(char**), toAlphabet);

    printf("Отсортированная строка: \n");
    //вывод результатов на экран
    for(int i =0; i<k; i++){

        printf("%s ", s[i]);

    }

    printf("\n");

}

