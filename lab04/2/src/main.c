#include <stdio.h>
int main(){
     float a = 123.656;
     int a1 = a;
     float result1 = ((a - a1)*1000)/a1;
       if (a1 > 0){ 
       int result2 = result1*100;
       float result3 = result2/100.0;
       printf("Результат: %.2f", result3);
       }else if (a1 == 0){
       printf("Error");
       }
       return 0;
}
