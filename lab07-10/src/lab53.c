#include <stdio.h>
#include <stdlib.h>

/**

 * @file lab53.c
 * @brief Файл з третім завданням з лабораторної роботи №5
 * "Визначити, чи є ціле 6-тизначне число "щасливим" квитком"
 * @author Ermakov Matthew.
 * @date 26-nov-2020
 * @version 0.1

*/

/**
 
 * @brief Функція перевірки двух частин 3-знаного числа на рівність між собою
 * @param Одне ціле шестизначне число
 * @return Значення змінної "result"

*/

char * ticket(int x){
	int firstPart;
	int secondPart;

	//достаем в цикле первые 4 числа и складываем их
	for (int i = 1; i <= 4; i++){
	
		firstPart += x%10;
		x = x/10; 
	
	}

	//достаем в цикле вторые 4 числа и складываем их
	for (int i = 1; i <= 4; i++){
	
		secondPart += x%10;
		x = x/10; 
	
	}
	
	char * result;
	
	//сравниваем сумму двух частей 8-ми значного числа. Если они равны, то билет счастливый. Иначе нет.
	if ((firstPart) == (secondPart)){
	
		result = "Lucky ticket!";
	
	}else{
	
		result = "Unlucky ticket";
	
	}
	
	return result;
	
}

int main(){
	
	//выводим результат

	char * result = ticket(23123434);

	printf("%s", result);

}
