#include <stdio.h>

/**

 * @file lab64.c
 * @brief Файл з четвертим завданням з лабораторної роботи №6
 * "У заданому тексті знайти кількість слів за умови, що між словами може бути будь-яка кількість пропусків"
 * @author Ermakov Matthew.
 * @date 01-dec-2020
 * @version 0.1

*/

/**
 
 * @brief Функція підрахування кількості слів
 * @param Рядок
 * @return Логічну відповідь у консоль

*/

int howManyWords(char text[]){
	
	int words = 0;                             // переменная для подсчёта слов в тексте      

	//цикл для поиска количества слов в тексте
	for(int i = 0; text[i] != '\0'; i++){

		if(text[i] != ' ' && text[i+1] <= ' '){

			words++;

		}

	}   

	return words;
	
}

int main(){
	int result = howManyWords("Hello World     sajdaksj");

	printf("%d", result);
	
	return 0;
}


