#include <stdio.h>

/**

 * @file lab51.c
 * @brief Файл з першим завданням з лабораторної роботи №5
 * "Визначити найбільший спільний дільник для двох заданих чисел"
 * @author Ermakov Matthew.
 * @date 25-nov-2020
 * @version 0.1

*/

/**
 
 * @brief Функція, яка підраховує найбільший спільний дільник
 * @param Два цілих числа
 * @return Значення змінної "a"

*/

int nod(int a, int b){
	
	while(a != b){
	
		if( a > b ){
		
			a = a - b;	
			
		}	
		
		else{
		
			b = b - a;
		
		}
		
	}
	
	return a;

}

int main(){
	
	//запись результата выполнения функции в переменную с произвольными числами
	int result = nod(1000, 100);

	printf("%d", result);

	return 0;
	
}


