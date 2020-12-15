#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/**

 * @file lab52.c
 * @brief Файл з другим завданням з лабораторної роботи №5
 * "Визначити, чи є задане число простим?"
 * @author Ermakov Matthew.
 * @date 25-nov-2020
 * @version 0.1

*/

/**
 
 * @brief Функція перевірки числа на простоту
 * @param Одне ціле число
 * @return Значення змінної "result"

*/

//функция проверки числа на простоту
bool sPrime(int a){
	int delimetr = 2;
	bool result;
	
	//делим изначальное число до тех пор, пока делиметр при делениии на него будет нечетным
	while (a % delimetr != 0){
	
		delimetr += 1;
		
	}
	
	//если делиметр и изначальное число равны, то возвращаем true. Иначе false.
	if(delimetr == a){
	
			result = true;
		
		}else{
	
			result = false;
	
	}
	
	return result;
}

int main(){

	//функция sPrime() возвращает тип bool. Если в ходе проверки возвращается true, то число простое. Иначе не простое.

	bool prime = sPrime(rand()%100);

	if(prime == true){
		printf("%s", "Prime");
	}else
	{
		printf("%s", "Not prime");
	}
	
	
}
