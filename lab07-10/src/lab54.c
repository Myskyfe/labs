#include <stdio.h>

/**

 * @file lab54.c
 * @brief Файл з четвертим завданням з лабораторної роботи №5
 * "Визначити, чи є задане число досконалим (якщо воно дорівнює сумі своїх дільників)"
 * @author Ermakov Matthew.
 * @date 26-nov-2020
 * @version 0.1

*/

/**
 
 * @brief Фукнція перевірки числа на досконалість
 * @param Одне ціле число
 * @return Значення змінної "result"

*/

char * isPerfect(int a){
	int del = 1;
	int number = 0;
	char * result;
	
	//пока делиметр меньше, чем изначальное число, то заходим в цикл. Если в цикле изначальное число делится без остатка на делиметр, то прибавлем его к переменной number. Потом увеличиваем делиметр на 1.
 	while (del<a){
 	
 		if(a%del == 0){
 		
 			number += del;
 		
 		}
 		
 		del++;
 	
 	}
	
	//если сумма делителей равна изначальному числу, то число совершенно. Иначе нет
	if(number == a){
	
		result = "Це досконале число!";
	
	}else{
	
		result = "Це не досконале число!";
	
	}
	
	return result;
}

int main(){
	
	//выводим результат
	char * result = isPerfect(28);

	printf("%s", result);
	
	return 0;
	
}
