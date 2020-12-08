#include <stdio.h>

int main(){
	
	int a = 28; //запрашиваемое число
	int del = 1;
	int number = 0;
	char * result;
	
 	while (del<a){
 	
 		if(a%del == 0){
 		
 			number += del;
 		
 		}
 		
 		del++;
 	
 	}
	
	if(number == a){
	
		result = "Це досконале число!";
	
	}else{
	
		result = "Це не досконале число!";
	
	}
	
	printf("%s", result);
	
	return 0;
	
}
