#include <stdio.h>

int main(){
	
	int x = 63144334;
	int firstPart;
	int secondPart;
	
	for (int i = 1; i <= 4; i++){
	
		firstPart += x%10;
		x = x/10; 
	
	}
	
	for (int i = 1; i <= 4; i++){
	
		secondPart += x%10;
		x = x/10; 
	
	}
	
	char * result;
	
	if ((firstPart) == (secondPart)){
	
		result = "Lucky ticket!";
	
	}else{
	
		result = "Unlucky ticket :(";
	
	}
	
	printf("%s", result);
	
	return 0;
	
}
