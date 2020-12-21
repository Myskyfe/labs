#include <stdio.h>
#include <stdbool.h>

int main(){
	
	//обьявление массива и его длинны
	int arrLength = 15;
	int arr[15];
	
        //значение, которое в ходе цикла и условий будет преобретать значение простого числа 
        int value = 1;

        for (int i = 0; i < arrLength; i++)
        {
        
            //переменная, обозначающая есть ли число простым. Если нет, то в цикле do...while будет выполняться сравнение до тех пор, пока число в переменной value не станет простым 
            bool prime = true;
            
            do{
            
                ++value;
                
                for (int j = 0; j < i && arr[j] <= value / 2 && (prime = value % arr[j] != 0); ++j);
                
            } while (!prime);

	    //записываем результат в каждый элемент массива arr[15]
            arr[i] = value;
            
        }
        
        printf("%d", arr[4]);
}


