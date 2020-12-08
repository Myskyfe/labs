#include <stdio.h>
int main(){
        int r = 15; 
        #define PI 3.14
        char com = 's';
        
             if (com == 'v'){
                 float result = (4*PI*r*r*r)/3;
                 printf("Результат: %.2f", result); 
             } else if (com == 'l'){
                      float result = 2*PI*r;
                      printf("Результат: %.2f", result);  
             }else if (com == 's'){
                       float result = PI*r*r;
                       printf("Результат: %.2f", result);     
             }else{
                      printf("Error"); 
              }
             return 0;                                    
}

