#include <stdio.h>

int main(){
	
	int a = 7;
	int delimetr = 2;
	char * result;
	
	while (a % delimetr != 0){
	
		delimetr += 1;
		
	}
	
	if(delimetr == a){
	
			result = "Yes";
		
		}else{
	
			result = "No";
	
		}
	
	printf("%s", result);
	
	return 0;
	
}
