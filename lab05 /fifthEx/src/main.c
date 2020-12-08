#include <stdio.h>

int main(){
	
	float a = 256.00f; //запрашиваемое число
	float sqrt = 1.00f;
	float multiply;
	
 	while(a > multiply){
 	
 		multiply = sqrt * sqrt;
 	
 		sqrt+=0.01f;
 	}
 	
 	float sqrtF = sqrt*100.00f;
 	int sqrtInt = (int)sqrtF;
 	float sqrtI = (float)sqrtInt / 100.00f;
 	float sqrtFloat = (float) (sqrtI);
 	float result = sqrtFloat - 0.01f; //результат
 	
 	printf("%f", result);
	
	return 0;
	
}
