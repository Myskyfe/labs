#include <stdio.h>
#include <stdlib.h>

/**

 * @file lab55.c
 * @brief Файл з п'ятим завданням з лабораторної роботи №5
 * "Без допомоги зовнішніх бібліотек отримати корінь числа"
 * @author Ermakov Matthew.
 * @date 26-nov-2020
 * @version 0.1

*/

/**
 
 * @brief Функція добутку кореня з числа
 * @param Одне ціле число
 * @return Значення змінної "result"

*/

float sqrtGiving(float a){
	float sqrt = 1.00f;
	float multiply;
	
	//в цикле записываем каждый раз квадрат переменной sqrt в переменную multiply. После каждого круга цикла инкременируем переменную sqrt на 0.01
 	while(a > multiply){
 	
 		multiply = sqrt * sqrt;
 	
 		sqrt+=0.01f;
 	}
 	
	//обрезаем до двух знаков после запятой
 	float sqrtF = sqrt*100.00f;
 	int sqrtInt = (int)sqrtF;
 	float sqrtI = (float)sqrtInt / 100.00f;
 	float sqrtFloat = (float) (sqrtI);
 	float result = sqrtFloat - 0.01f; //результат
	
	return result;
}

int main(){

	//выводим результат
	float sqrt = sqrtGiving((float)(rand()%10));

	printf("%f", sqrt);
	
}
