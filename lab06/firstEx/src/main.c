#include <stdio.h>

int main(){

	const int massLength = 25;
	char string[] = {"matthewMe                "};
	char mass[25]; //массив вывода
	
	//разбираем строку string[] на символы и записываем ее в массив mass[25]
	for (int j = 0; j < massLength; j++){
	
		if (string[j] == ' '){
		
			break;
		
		}else{
		
			mass[j] = string[j];
		
		}
	
	}
	
	//проверяем на наличие схожих символов. Если их нет, то заполняем все каким нибудь "_"
	for (int j = 0; j<=massLength; j++){
	
		if(mass[j] != string[j]){
		
			mass[j] = '_';
					
		}
	
	}
	
	//создаем переменную, в которую будем записывать кол-во символов "_"
	int foolerCounter = 0;
	
	//считаем кол-во элементов массива с "_"
	for (int j = 0; j<=massLength; j++){
	
		if(mass[j] == '_'){
		
			foolerCounter++;
		
		}
	
	}
	
	//начинаем выравнивать массив: заполняем половиной полученного количества символов из переменной foolerCounter
	
	for (int j = 0; j<foolerCounter/2; j++){
	
		mass[j] = '_';
	
	}
	
	//заполняем массив начиная с первого пустого элемента элементами строки
	for (int j = 0; j<=massLength; j++){
	
		mass[j+foolerCounter/2] = string[j];
	
	}
	
	//дозаполняем массив оставшимимся "_". Для этого выполним проверку на пустоту
	if(massLength % 2 == 0){
	
		for (int j = 0; j<massLength; j++){
		
			if (mass[j] == ' ' || mass[j] == '\0'){
			
				mass[j] = '_';
			
			}
		
		}
		
	}else{
	
		for (int j = 0; j<=massLength; j++){
		
			if (mass[j] == ' ' || mass[j] == '\0'){
			
				mass[j] = '_';
			
			}
		
		}
	
	}
	
	//выводим результат
	
	for (int j = 0; j < massLength; j++){
	
		printf("%c", mass[j]);
	
	}

	return 0;
	
}
