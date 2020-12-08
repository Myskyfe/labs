#include <stdio.h>

int main(){
	
	int a = 42;
	int b = 525;
	
	while(a != b){
	
		if( a > b ){
		
			a = a - b;	
			
		}	
		
		else{
		
			b = b - a;
		
		}
		
	}
	
	printf("%d", a);
	
	return 0;
	
}
